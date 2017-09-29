#pragma once

#include "icvar.h"

class CCvar final : public ICvar
{
public:
	CCvar() = default;
	~CCvar() = default;
	
	bool Connect( CreateInterfaceFn factory ) override;
	void Disconnect() override;

	void *QueryInterface( const char *pInterfaceName ) override;

	InitReturnVal_t Init() override;
	void Shutdown() override;
	
	CVarDLLIdentifier_t AllocateDLLIdentifier() override;

	void RegisterConCommand( ConCommandBase *pCommandBase ) override;
	void UnregisterConCommand( ConCommandBase *pCommandBase ) override;
	void UnregisterConCommands( CVarDLLIdentifier_t id ) override;

	const char *GetCommandLineValue( const char *pVariableName ) override;

	ConCommandBase *FindCommandBase( const char *name ) override;
	const ConCommandBase *FindCommandBase( const char *name ) const override;
	ConVar *FindVar ( const char *var_name ) override;
	const ConVar *FindVar ( const char *var_name ) const override;
	ConCommand *FindCommand( const char *name ) override;
	const ConCommand *FindCommand( const char *name ) const override;

	ConCommandBase	*GetCommands() override;
	const ConCommandBase *GetCommands() const override;

	void InstallGlobalChangeCallback( FnChangeCallback_t callback ) override;
	void RemoveGlobalChangeCallback( FnChangeCallback_t callback ) override;
	void CallGlobalChangeCallbacks( ConVar *var, const char *pOldString, float flOldValue ) override;

	void InstallConsoleDisplayFunc( IConsoleDisplayFunc* pDisplayFunc ) override;
	void RemoveConsoleDisplayFunc( IConsoleDisplayFunc* pDisplayFunc ) override;
	void ConsoleColorPrintf( const Color& clr, PRINTF_FORMAT_STRING const char *pFormat, ... ) const FMTFUNCTION( 3, 4 ) override;
	void ConsolePrintf( PRINTF_FORMAT_STRING const char *pFormat, ... ) const FMTFUNCTION( 2, 3 ) override;
	void ConsoleDPrintf( PRINTF_FORMAT_STRING const char *pFormat, ... ) const FMTFUNCTION( 2, 3 ) override;

	void RevertFlaggedConVars( int nFlag ) override;

	void InstallCVarQuery( ICvarQuery *pQuery ) override;

#if defined( _X360 )
	void PublishToVXConsole( ) override;
#endif

	bool IsMaterialThreadSetAllowed( ) const override;
	void QueueMaterialThreadSetValue( ConVar *pConVar, const char *pValue ) override;
	void QueueMaterialThreadSetValue( ConVar *pConVar, int nValue ) override;
	void QueueMaterialThreadSetValue( ConVar *pConVar, float flValue ) override;
	bool HasQueuedMaterialThreadConVarSets() const override;
	int ProcessQueuedMaterialThreadConVarSets() override;

	ICVarIteratorInternal *FactoryInternalIterator() override;
};
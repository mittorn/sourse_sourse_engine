#include <cstdio>
#include "vstdlib/cvar.h"

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

	ConCommandBase *GetCommands() override;
	const ConCommandBase *GetCommands() const override;

	void InstallGlobalChangeCallback( FnChangeCallback_t callback ) override;
	void RemoveGlobalChangeCallback( FnChangeCallback_t callback ) override;
	void CallGlobalChangeCallbacks( ConVar *var, const char *pOldString, float flOldValue ) override;

	void InstallConsoleDisplayFunc( IConsoleDisplayFunc* pDisplayFunc ) override;
	void RemoveConsoleDisplayFunc( IConsoleDisplayFunc* pDisplayFunc ) override;
	FMTFUNCTION( 3, 4 ) void ConsoleColorPrintf( const Color& clr, PRINTF_FORMAT_STRING const char *pFormat, ... ) const override;
	FMTFUNCTION( 2, 3 ) void ConsolePrintf( PRINTF_FORMAT_STRING const char *pFormat, ... ) const override;
	FMTFUNCTION( 2, 3 ) void ConsoleDPrintf( PRINTF_FORMAT_STRING const char *pFormat, ... ) const override;

	void RevertFlaggedConVars( int nFlag ) override;

	void InstallCVarQuery( ICvarQuery *pQuery ) override;

#ifdef _X360
	void PublishToVXConsole() override;
#endif

	bool IsMaterialThreadSetAllowed() const override;
	void QueueMaterialThreadSetValue( ConVar *pConVar, const char *pValue ) override;
	void QueueMaterialThreadSetValue( ConVar *pConVar, int nValue ) override;
	void QueueMaterialThreadSetValue( ConVar *pConVar, float flValue ) override;
	bool HasQueuedMaterialThreadConVarSets() const override;
	int ProcessQueuedMaterialThreadConVarSets() override;

	ICVarIteratorInternal *FactoryInternalIterator() override;
private:
};

CCvar gCvar;
EXPOSE_SINGLE_INTERFACE_GLOBALVAR(CCvar, ICvar, CVAR_INTERFACE_VERSION, gCvar)

CreateInterfaceFn VStdLib_GetICVarFactory()
{
	return Sys_GetFactoryThis();
};

bool CCvar::Connect( CreateInterfaceFn factory )
{
	return true;
};

void CCvar::Disconnect()
{
};

void *CCvar::QueryInterface( const char *pInterfaceName )
{
	if(!strcmp(pInterfaceName, CVAR_INTERFACE_VERSION))
		return static_cast<ICvar*>(this);
	
	return nullptr;
};

InitReturnVal_t CCvar::Init()
{
	// Nothing
	return INIT_OK;
};

void CCvar::Shutdown()
{
	// Nothing
};

CVarDLLIdentifier_t CCvar::AllocateDLLIdentifier()
{
	//return dllidentifiers++;
	return 0;
};

void CCvar::RegisterConCommand( ConCommandBase *pCommandBase )
{
	//pCommandBase->registered = true;
};

void CCvar::UnregisterConCommand( ConCommandBase *pCommandBase )
{
	//pCommandBase->registered = false;
};

void CCvar::UnregisterConCommands( CVarDLLIdentifier_t id )
{
};

const char *CCvar::GetCommandLineValue( const char *pVariableName )
{
	return "";
};

ConCommandBase *CCvar::FindCommandBase( const char *name )
{
	return nullptr;
};

const ConCommandBase *CCvar::FindCommandBase( const char *name ) const
{
	return nullptr;
};

ConVar *CCvar::FindVar( const char *var_name )
{
	return nullptr;
};

const ConVar *CCvar::FindVar( const char *var_name ) const
{
	return nullptr;
};

ConCommand *CCvar::FindCommand( const char *name )
{
	return nullptr;
};

const ConCommand *CCvar::FindCommand( const char *name ) const
{
	return nullptr;
};

ConCommandBase *CCvar::GetCommands()
{
	return nullptr;
};

const ConCommandBase *CCvar::GetCommands() const
{
	return nullptr;
};

void CCvar::InstallGlobalChangeCallback( FnChangeCallback_t callback )
{
};

void CCvar::RemoveGlobalChangeCallback( FnChangeCallback_t callback )
{
};

void CCvar::CallGlobalChangeCallbacks( ConVar *var, const char *pOldString, float flOldValue )
{
};

void CCvar::InstallConsoleDisplayFunc( IConsoleDisplayFunc* pDisplayFunc )
{
};

void CCvar::RemoveConsoleDisplayFunc( IConsoleDisplayFunc* pDisplayFunc )
{
};

void CCvar::ConsoleColorPrintf( const Color& clr, PRINTF_FORMAT_STRING const char *pFormat, ... ) const
{
};

void CCvar::ConsolePrintf( PRINTF_FORMAT_STRING const char *pFormat, ... ) const
{
};

void CCvar::ConsoleDPrintf( PRINTF_FORMAT_STRING const char *pFormat, ... ) const
{
};

void CCvar::RevertFlaggedConVars( int nFlag )
{
};

void CCvar::InstallCVarQuery( ICvarQuery *pQuery )
{
};

#ifdef _X360
void CCvar::PublishToVXConsole()
{
	// Nothing to do here
};
#endif

bool CCvar::IsMaterialThreadSetAllowed() const
{
	return false;
};

void CCvar::QueueMaterialThreadSetValue( ConVar *pConVar, const char *pValue )
{
};

void CCvar::QueueMaterialThreadSetValue( ConVar *pConVar, int nValue )
{
};

void CCvar::QueueMaterialThreadSetValue( ConVar *pConVar, float flValue )
{
};

bool CCvar::HasQueuedMaterialThreadConVarSets() const
{
	return false;
};

int CCvar::ProcessQueuedMaterialThreadConVarSets()
{
	return 0;
};

ICvar::ICVarIteratorInternal *CCvar::FactoryInternalIterator()
{
	return nullptr;
};
#pragma once

#include "filesystem.h"

class CFileSystem final : public IFileSystem
{
public:
	CFileSystem() = default;
	~CFileSystem() = default;
	
	// IAppSystem
	
	bool Connect( CreateInterfaceFn factory ) override;
	void Disconnect() override;

	void *QueryInterface( const char *pInterfaceName ) override;

	InitReturnVal_t Init() override;
	void Shutdown() override;
	
	// IBaseFileSystem
	
	int Read( void* pOutput, int size, FileHandle_t file ) override;
	int Write( void const* pInput, int size, FileHandle_t file ) override;

	FileHandle_t Open( const char *pFileName, const char *pOptions, const char *pathID = 0 ) override;
	void Close( FileHandle_t file ) override;

	void Seek( FileHandle_t file, int pos, FileSystemSeek_t seekType ) override;
	unsigned int Tell( FileHandle_t file ) override;
	unsigned int Size( FileHandle_t file ) override;
	unsigned int Size( const char *pFileName, const char *pPathID = 0 ) override;

	void Flush( FileHandle_t file ) override;
	bool Precache( const char *pFileName, const char *pPathID = 0 ) override;

	bool FileExists( const char *pFileName, const char *pPathID = 0 ) override;
	bool IsFileWritable( char const *pFileName, const char *pPathID = 0 ) override;
	bool SetFileWritable( char const *pFileName, bool writable, const char *pPathID = 0 ) override;

	long GetFileTime( const char *pFileName, const char *pPathID = 0 ) override;

	bool ReadFile( const char *pFileName, const char *pPath, CUtlBuffer &buf, int nMaxBytes = 0, int nStartingByte = 0, FSAllocFunc_t pfnAlloc = NULL ) override;
	bool WriteFile( const char *pFileName, const char *pPath, CUtlBuffer &buf ) override;
	bool UnzipFile( const char *pFileName, const char *pPath, const char *pDestination ) override;
	
	// IFileSystem
	
	bool IsSteam() const override;

	FilesystemMountRetval_t MountSteamContent( int nExtraAppId = -1 ) override;

	void AddSearchPath( const char *pPath, const char *pathID, SearchPathAdd_t addType = PATH_ADD_TO_TAIL ) override;
	bool RemoveSearchPath( const char *pPath, const char *pathID = 0 ) override;

	void RemoveAllSearchPaths( void ) override;

	void RemoveSearchPaths( const char *szPathID ) override;

	void MarkPathIDByRequestOnly( const char *pPathID, bool bRequestOnly ) override;

	const char *RelativePathToFullPath( const char *pFileName, const char *pPathID, OUT_Z_CAP(maxLenInChars) char *pDest, int maxLenInChars, PathTypeFilter_t pathFilter = FILTER_NONE, PathTypeQuery_t *pPathType = NULL ) override;

	int GetSearchPath( const char *pathID, bool bGetPackFiles, OUT_Z_CAP(maxLenInChars) char *pDest, int maxLenInChars ) override;

	bool AddPackFile( const char *fullpath, const char *pathID ) override;

	void RemoveFile( char const* pRelativePath, const char *pathID = 0 ) override;
	bool RenameFile( char const *pOldPath, char const *pNewPath, const char *pathID = 0 ) override;

	void CreateDirHierarchy( const char *path, const char *pathID = 0 ) override;

	bool IsDirectory( const char *pFileName, const char *pathID = 0 ) override;

	void FileTimeToString( char* pStrip, int maxCharsIncludingTerminator, long fileTime ) override;

	void SetBufferSize( FileHandle_t file, unsigned nBytes ) override;

	bool IsOk( FileHandle_t file ) override;

	bool EndOfFile( FileHandle_t file ) override;

	char *ReadLine( char *pOutput, int maxChars, FileHandle_t file ) override;
	int FPrintf( FileHandle_t file, PRINTF_FORMAT_STRING const char *pFormat, ... ) override;

	CSysModule *LoadModule( const char *pFileName, const char *pPathID = 0, bool bValidatedDllOnly = true ) override;
	void UnloadModule( CSysModule *pModule ) override;

	const char *FindFirst( const char *pWildCard, FileFindHandle_t *pHandle ) override;
	const char *FindNext( FileFindHandle_t handle ) override;
	
	bool FindIsDirectory( FileFindHandle_t handle ) override;
	void FindClose( FileFindHandle_t handle ) override;

	const char *FindFirstEx( 
							const char *pWildCard, 
							const char *pPathID,
							FileFindHandle_t *pHandle
							) override;

	const char *GetLocalPath( const char *pFileName, OUT_Z_CAP(maxLenInChars) char *pDest, int maxLenInChars ) override;

	bool FullPathToRelativePath( const char *pFullpath, OUT_Z_CAP(maxLenInChars) char *pDest, int maxLenInChars ) override;

	bool GetCurrentDirectory( char* pDirectory, int maxlen ) override;

	FileNameHandle_t FindOrAddFileName( char const *pFileName ) override;
	bool String( const FileNameHandle_t& handle, char *buf, int buflen ) override;

	FSAsyncStatus_t AsyncRead( const FileAsyncRequest_t &request, FSAsyncControl_t *phControl = NULL )	{ return AsyncReadMultiple( &request, 1, phControl ); 	}
	FSAsyncStatus_t AsyncReadMultiple( const FileAsyncRequest_t *pRequests, int nRequests,  FSAsyncControl_t *phControls = NULL ) override;
	FSAsyncStatus_t AsyncAppend(const char *pFileName, const void *pSrc, int nSrcBytes, bool bFreeMemory, FSAsyncControl_t *pControl = NULL ) override;
	FSAsyncStatus_t AsyncAppendFile(const char *pAppendToFileName, const char *pAppendFromFileName, FSAsyncControl_t *pControl = NULL ) override;
	void AsyncFinishAll( int iToPriority = 0 ) override;
	void AsyncFinishAllWrites() override;
	FSAsyncStatus_t	AsyncFlush() override;
	bool AsyncSuspend() override;
	bool AsyncResume() override;

	void AsyncAddFetcher( IAsyncFileFetch *pFetcher ) override;
	void AsyncRemoveFetcher( IAsyncFileFetch *pFetcher ) override;

	FSAsyncStatus_t	AsyncBeginRead( const char *pszFile, FSAsyncFile_t *phFile ) override;
	FSAsyncStatus_t	AsyncEndRead( FSAsyncFile_t hFile ) override;

	FSAsyncStatus_t	AsyncFinish( FSAsyncControl_t hControl, bool wait = true ) override;
	FSAsyncStatus_t	AsyncGetResult( FSAsyncControl_t hControl, void **ppData, int *pSize ) override;
	FSAsyncStatus_t	AsyncAbort( FSAsyncControl_t hControl ) override;
	FSAsyncStatus_t	AsyncStatus( FSAsyncControl_t hControl ) override;
	FSAsyncStatus_t	AsyncSetPriority(FSAsyncControl_t hControl, int newPriority) override;
	void AsyncAddRef( FSAsyncControl_t hControl ) override;
	void AsyncRelease( FSAsyncControl_t hControl ) override;

	WaitForResourcesHandle_t WaitForResources( const char *resourcelist ) override;
	bool GetWaitForResourcesProgress( WaitForResourcesHandle_t handle, float *progress /* out */ , bool *complete /* out */ ) override;
	void CancelWaitForResources( WaitForResourcesHandle_t handle ) override;

	int HintResourceNeed( const char *hintlist, int forgetEverything ) override;
	bool IsFileImmediatelyAvailable(const char *pFileName) override;
	
	void GetLocalCopy( const char *pFileName ) override;

	void PrintOpenedFiles( void ) override;
	void PrintSearchPaths( void ) override;

	void SetWarningFunc( void (*pfnWarning)( PRINTF_FORMAT_STRING const char *fmt, ... ) ) override;
	void SetWarningLevel( FileWarningLevel_t level ) override;
	void AddLoggingFunc( void (*pfnLogFunc)( const char *fileName, const char *accessType ) ) override;
	void RemoveLoggingFunc( FileSystemLoggingFunc_t logFunc ) override;

	const FileSystemStatistics *GetFilesystemStatistics() override;

	FileHandle_t OpenEx( const char *pFileName, const char *pOptions, unsigned flags = 0, const char *pathID = 0, char **ppszResolvedFilename = NULL ) override;

	int ReadEx( void* pOutput, int sizeDest, int size, FileHandle_t file ) override;
	int ReadFileEx( const char *pFileName, const char *pPath, void **ppBuf, bool bNullTerminate = false, bool bOptimalAlloc = false, int nMaxBytes = 0, int nStartingByte = 0, FSAllocFunc_t pfnAlloc = NULL ) override;

	FileNameHandle_t FindFileName( char const *pFileName ) override;

#if defined( TRACK_BLOCKING_IO )
	void EnableBlockingFileAccessTracking( bool state ) override;
	bool IsBlockingFileAccessEnabled() const override;

	IBlockingFileItemList *RetrieveBlockingFileAccessInfo() override;
#endif

	void SetupPreloadData() override;
	void DiscardPreloadData() override;

	enum KeyValuesPreloadType_t
	{
		TYPE_VMT,
		TYPE_SOUNDEMITTER,
		TYPE_SOUNDSCAPE,
		NUM_PRELOAD_TYPES
	};

	void LoadCompiledKeyValues( KeyValuesPreloadType_t type, char const *archiveFile ) override;

	KeyValues *LoadKeyValues( KeyValuesPreloadType_t type, char const *filename, char const *pPathID = 0 ) override;
	bool LoadKeyValues( KeyValues& head, KeyValuesPreloadType_t type, char const *filename, char const *pPathID = 0 ) override;
	bool ExtractRootKeyName( KeyValuesPreloadType_t type, char *outbuf, size_t bufsize, char const *filename, char const *pPathID = 0 ) override;

	FSAsyncStatus_t	AsyncWrite(const char *pFileName, const void *pSrc, int nSrcBytes, bool bFreeMemory, bool bAppend = false, FSAsyncControl_t *pControl = NULL ) override;
	FSAsyncStatus_t	AsyncWriteFile(const char *pFileName, const CUtlBuffer *pSrc, int nSrcBytes, bool bFreeMemory, bool bAppend = false, FSAsyncControl_t *pControl = NULL ) override;
	FSAsyncStatus_t AsyncReadCreditAlloc( const FileAsyncRequest_t &request, const char *pszFile, int line, FSAsyncControl_t *phControl = NULL )	{ return AsyncReadMultipleCreditAlloc( &request, 1, pszFile, line, phControl ); 	}
	FSAsyncStatus_t	AsyncReadMultipleCreditAlloc( const FileAsyncRequest_t *pRequests, int nRequests, const char *pszFile, int line, FSAsyncControl_t *phControls = NULL ) override;

	bool GetFileTypeForFullPath( char const *pFullPath, OUT_Z_BYTECAP(bufSizeInBytes) wchar_t *buf, size_t bufSizeInBytes ) override;

	bool ReadToBuffer( FileHandle_t hFile, CUtlBuffer &buf, int nMaxBytes = 0, FSAllocFunc_t pfnAlloc = NULL ) override;

	bool GetOptimalIOConstraints( FileHandle_t hFile, unsigned *pOffsetAlign, unsigned *pSizeAlign, unsigned *pBufferAlign ) override;
	inline unsigned GetOptimalReadSize( FileHandle_t hFile, unsigned nLogicalSize );
	void *AllocOptimalReadBuffer( FileHandle_t hFile, unsigned nSize = 0, unsigned nOffset = 0 ) override;
	void FreeOptimalReadBuffer( void * ) override;

	void BeginMapAccess() override;
	void EndMapAccess() override;

	bool FullPathToRelativePathEx( const char *pFullpath, const char *pPathId, OUT_Z_CAP(maxLenInChars) char *pDest, int maxLenInChars ) override;

	int GetPathIndex( const FileNameHandle_t &handle ) override;
	long GetPathTime( const char *pPath, const char *pPathID ) override;

	DVDMode_t GetDVDMode() override;

	void EnableWhitelistFileTracking( bool bEnable, bool bCacheAllVPKHashes, bool bRecalculateAndCheckHashes ) override;

	void RegisterFileWhitelist( IPureServerWhitelist *pWhiteList, IFileList **pFilesToReload ) override;

	void MarkAllCRCsUnverified() override;

	void CacheFileCRCs( const char *pPathname, ECacheCRCType eType, IFileList *pFilter ) override;
	EFileCRCStatus CheckCachedFileHash( const char *pPathID, const char *pRelativeFilename, int nFileFraction, FileHash_t *pFileHash ) override;

	int GetUnverifiedFileHashes( CUnverifiedFileHash *pFiles, int nMaxFiles ) override;
	
	int GetWhitelistSpewFlags() override;
	void SetWhitelistSpewFlags( int flags ) override;

	void InstallDirtyDiskReportFunc( FSDirtyDiskReportFunc_t func ) override;

	FileCacheHandle_t CreateFileCache() override;
	void AddFilesToFileCache( FileCacheHandle_t cacheId, const char **ppFileNames, int nFileNames, const char *pPathID ) override;
	bool IsFileCacheFileLoaded( FileCacheHandle_t cacheId, const char* pFileName ) override;
	bool IsFileCacheLoaded( FileCacheHandle_t cacheId ) override;
	void DestroyFileCache( FileCacheHandle_t cacheId ) override;

	bool RegisterMemoryFile( CMemoryFileBacking *pFile, CMemoryFileBacking **ppExistingFileWithRef ) override;
	void UnregisterMemoryFile( CMemoryFileBacking *pFile ) override;

	void CacheAllVPKFileHashes( bool bCacheAllVPKHashes, bool bRecalculateAndCheckHashes ) override;
	bool CheckVPKFileHash( int PackFileID, int nPackFileNumber, int nFileFraction, MD5Value_t &md5Value ) override;

	void NotifyFileUnloaded( const char *pszFilename, const char *pPathId ) override;

	bool GetCaseCorrectFullPath_Ptr( const char *pFullPath, OUT_Z_CAP( maxLenInChars ) char *pDest, int maxLenInChars ) override;
};
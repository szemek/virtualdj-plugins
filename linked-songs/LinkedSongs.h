#ifndef MYPLUGIN8_H
#define MYPLUGIN8_H

// we include stdio.h only to use the sprintf() function
// we define _CRT_SECURE_NO_WARNINGS for the warnings of the sprintf() function
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include "vdjOnlineSource.h"

class LinkedSongs : public IVdjPluginOnlineSource
{
public:
    HRESULT VDJ_API OnGetPluginInfo(TVdjPluginInfo8* infos) override;
    HRESULT VDJ_API OnSearch(const char* search, IVdjTracksList* tracksList) override;
    HRESULT VDJ_API OnSearchCancel() override;
    HRESULT VDJ_API GetStreamUrl(const char* uniqueId, IVdjString& url, IVdjString& errorMessage) override;
    HRESULT VDJ_API GetFolderList(IVdjSubfoldersList* subfoldersList) override;
    HRESULT VDJ_API GetContextMenu(const char* uniqueId, IVdjContextMenu* contextMenu) override;
    HRESULT VDJ_API OnContextMenu(const char* uniqueId, size_t menuIndex) override;
    HRESULT VDJ_API GetFolderContextMenu(const char *folderUniqueId, IVdjContextMenu *contextMenu) override;
    HRESULT VDJ_API OnFolderContextMenu(const char* folderUniqueId, size_t menuIndex) override;
};

#endif

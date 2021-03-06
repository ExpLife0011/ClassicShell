// Classic Shell (c) 2009-2013, Ivo Beltchev
// The sources for Classic Shell are distributed under the MIT open source license

// ClassicCopyExt.cpp : Implementation of CClassicCopyExt

#include "stdafx.h"
#include "ClassicCopyExt.h"


// CClassicCopyExt - this is a dummy drag and drop handler. Its purpose is to get Explorer to load the DLL when
// a file is being copied or moved.

void InitClassicCopyThread( void );

STDMETHODIMP CClassicCopyExt::Initialize( PCIDLIST_ABSOLUTE pidlFolder, LPDATAOBJECT pDataObj, HKEY hProgID )
{
	InitClassicCopyThread();
	return S_OK;
}

STDMETHODIMP CClassicCopyExt::QueryContextMenu( HMENU hmenu, UINT uMenuIndex, UINT uidFirstCmd, UINT uidLastCmd, UINT uFlags )
{
	return MAKE_HRESULT(SEVERITY_SUCCESS,FACILITY_NULL,0);
}

STDMETHODIMP CClassicCopyExt::GetCommandString( UINT_PTR idCmd, UINT uFlags, UINT* pwReserved, LPSTR pszName, UINT cchMax )
{
	return E_INVALIDARG;
}

STDMETHODIMP CClassicCopyExt::InvokeCommand( LPCMINVOKECOMMANDINFO pCmdInfo )
{
	return E_INVALIDARG;
}

// xdwebDoc.cpp : implementation of the CXdwebDoc class
//

#include "stdafx.h"
#include "xdweb.h"

#include "xdwebDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CXdwebDoc

IMPLEMENT_DYNCREATE(CXdwebDoc, CDocument)

BEGIN_MESSAGE_MAP(CXdwebDoc, CDocument)
	//{{AFX_MSG_MAP(CXdwebDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CXdwebDoc construction/destruction

CXdwebDoc::CXdwebDoc()
{
	// TODO: add one-time construction code here

}

CXdwebDoc::~CXdwebDoc()
{
}

BOOL CXdwebDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CXdwebDoc serialization

void CXdwebDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CXdwebDoc diagnostics

#ifdef _DEBUG
void CXdwebDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CXdwebDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CXdwebDoc commands

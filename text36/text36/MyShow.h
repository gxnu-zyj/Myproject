#pragma once


// MyShow 对话框

class MyShow : public CDialogEx
{
	DECLARE_DYNAMIC(MyShow)

public:
	MyShow(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~MyShow();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEdit1();
	CString s;
	virtual BOOL OnInitDialog();
};

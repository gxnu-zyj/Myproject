#pragma once


// Mydlg1 对话框

class Mydlg1 : public CDialogEx
{
	DECLARE_DYNAMIC(Mydlg1)

public:
	Mydlg1(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~Mydlg1();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString s1;
	CString s2;
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedButton1();
};

#pragma once


// Sum �Ի���

class Sum : public CDialogEx
{
	DECLARE_DYNAMIC(Sum)

public:
	Sum(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~Sum();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	int a;
	int b;
	int sum;
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedButton1();
};

#pragma once

typedef int (FAR WINAPI *pDD_btn)(int btn);
typedef int (FAR WINAPI *pDD_whl)(int whl);
typedef int (FAR WINAPI *pDD_key)(int keycode,int flag);
typedef int (FAR WINAPI *pDD_mov)( int x,int y);
typedef int (FAR WINAPI *pDD_str)(char *str);
typedef int (FAR WINAPI *pDD_movR)( int dx,int dy);
typedef int (FAR WINAPI *pDD_int)(int val);

class CDD
{
public:
	CDD(void);
	~CDD(void);
public:
	pDD_btn      DD_btn ;
	pDD_whl      DD_whl ;
	pDD_key      DD_key ;
	pDD_mov    DD_mov ;
	pDD_str       DD_str;
	pDD_movR   DD_movR ;
	pDD_int       DD_int;
public:
	HINSTANCE m_hModule;
	int GetFunAddr(CString dllfile);

};

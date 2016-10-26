// convert_CString.c

// 1 CString 与　char *
CString s = "hello";
char *p = (LPSTR)(LPCTSTR)s;

char p[] = "world";
s.Format("%s", p);

// 2 CString 与　string
CString s;
string str = "hello";
s.Format("%s", str.c_str());

CString s = "hello";
string str(s.GetBuffer()); // string 类型无法用printf打印
CString.ReleaseBuffer();

// 3 char 与　string
char p[] = "hello";
string str(p);

const char *c = str.c_str();

// 4 CString 与　int
int i = atoi(s); // 转换浮点用atof
int i = _ttoi(s);

CString.Format("%d", i);

// 5 CString 与　char[100]
char a[100];
CString s("abc");
strncpy(a, (LPCTSTR)s, sizeof(a)); // vs2013报错，需要用strncpy_s

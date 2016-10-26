// use_CString.c

// 初始化
CString s;
CString s("hello");
CString s = "hello";

char c[] = "hello";
CString s = "";
s.Format("%s", c);

CString s = "hello";
// 长度
// 注意：英文每个字符占一个长度，中文每个占两个长度
printf("%d", s.GetLength());    // 5

// 反转
s.MakeReverse();    // "olleh"

// 转换大小写
s.MakeUpper();      // "HELLO"
s.MakeLower();      // "hello"

// 插入　删除
s.Insert(2, "a");   // "heallo"
s.Delete(3, 2);     // "hel"

// 替换与移除指定字符
s.Replace("ll", "yy");  // "heyyo"
s.Remove('l');          // "heo"

// 去除左右两边空格
// 一般从文件读取字符串，都会先去除两端空格，防止读取无意义数据
s.TrimLeft();   // 默认去除左端空格
s.TrimRight("a");  // 去除右端的任意多个"a"

// 清空字符串以及判断字符串是否为空
// 判断是否为空也常用于读取文件
s.Empty();
s.IsEmpty();    // 为空时返回0

// 查找
s.Find('e');    // 1
s.Find('ll');   // 2
s.Find('e', 1); // 0
s.Find('a');    // 找不到返回-1
s.ReverseFind('e'); // 反向查找，即先反向再查找，3

// 格式化
s.Format("%d", 2);  // "2"

// 取值与赋值
s.GetAt(2); // "l"	如果索引越界，会出异常
s.SetAt(2, 'h');    // "hehlo"

s.Left(2);  // "he"
s.Right(2);  // "lo"
s.Mid(2, 2);    // "ll"
s.Mid(2);   // "llo"

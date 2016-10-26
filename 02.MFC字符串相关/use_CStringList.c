// use_CStringList.c

// 构造
CStringList str_list;

// 添加删除元素
str_list.AddHead("123");    //在列表头部添加元素
str_list.AddTail("123");    //在列表尾部添加元素

str_list.InsertBefor(POSITION pos, "123");     // 在给定位置前插入新元素
str_list.InsertAfter(POSITION pos, "123");     // 在给定位置后插入新元素

str_list.RemoveHead();      // 分别时删除头，尾，所有元素
str_list.RemoveTail();
str_list.RemoveAll();

// 访问
str_list.GetHead();         // 获取头，尾部元素
str_list.GetTail();

str_list.GetAt(POSITION pos);           // 获取指定位置的元素
str_list.SetAt(POSITION pos);           // 设置指定位置的元素
str_list.RemoveAt(POSITION pos);        // 删除指定位置的元素

// 遍历所用
str_list.GetHeadPosition(); // 获取头部，尾部元素所在位置
str_list.GetTailPosition();

str_list.GetNext(POSITION pos);         // 获取下一个元素
str_list.GetPrev(POSITION pos);         // 获取前一个元素

// 查找
POSITION pos = str_list.Find("123");            // 获取由字符串指定的元素的位置
POSITION pos = str_list.FindIndex(int i);       // 获取由索引指定的元素的位置

// 状态
str_list.GetCount();        // 返回元素个数
str_list.IsEmpty();          // 测试列表是否为空

// 遍历
POSITION pos;
pos = str_list.GetHeadPosition();
while (pos != NULL)
{
    CString s = str_list.GetNext(pos);
    printf("%s", s);
}

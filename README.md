# cppMap
### 该项目记录了C++中对map的各种操作，有插入，遍历，更新，清空
## 注意：
### map中可以套map，例如：map<string, map<string, string>>，此时执行更新操作的时候，需要对内外两层都更新数据

## 在main.cpp的最后有一个delete map是为了执行析构函数。原因如下：
### 假如现在有一个类Student，有两种定义对象的方法：
### 1. Student stu(1, "LiMing"); 这种方法将对象定义在栈上，程序结束的时候会自动执行析构函数。
### 2. Student* stu = new Student(1, "LiMing"); 这种方法将对象定义在堆上，除非delete，否则析构函数不执行。

## 1.2-1.4
### 1.2 问题
1） 注释 1.1 程序中的 string 头文件声明, 查看编译结果。
结果：
编译失败，有以下报错
> error C2679: binary '>>': no operator found which takes a right-hand operand of type 'std::string' (or there is no acceptable conversion)  

2） 恢复 1 中对 string 头文件声明的注释，注释下一行 using namespace std; 查看编译结果
结果：
编译失败，有以下报错
> error C2065: 'string': undeclared identifier  
> error C2146: syntax error: missing ';' before identifier 'user_name'  
> error C2065: 'user_name': undeclared identifier  
> error C2065: 'cout': undeclared identifier  
> 'cin': undeclared identifier  
> error C2065: 'user_name': undeclared identifier  
> error C2065: 'cout': undeclared identifier  
> error C2065: 'user_name': undeclared identifier  

### 1.3 问题
将函数名 main（） 修改为 my_main() 然后重新编译，查看结果
结果：
编译失败，有以下报错
> MSVCRTD.lib(exe_main.obj) : error LNK2019: unresolved external symbol _main referenced in function "int __cdecl invoke_main(void)" (?invoke_main@@YAHXZ)  
>  fatal error LNK1120: 1 unresolved externals  

### 1.4 问题
试着扩充这个程序内容   
1）要求用户同时输入名字（first name）和姓氏（last name）  
2）同时打印姓氏和名字  
```c++
# include <iostream>
# include <string>
using namespace std;

int main() {
	string user_name;
	string last_name;
	cout << "Please enter your first name and last name(such as:John Dalton): ";
	cin >> user_name
		>> last_name;
	cout << '\n'
		<< "Hello, "
		<< user_name
		<< " "
		<< last_name
		<< " ... and goodbye!\n";
	return 0;
}
```
程序运行结果：  
![image](https://user-images.githubusercontent.com/59823739/186675948-cb6369d5-261e-4b10-87fa-13c48bbfa27c.png)


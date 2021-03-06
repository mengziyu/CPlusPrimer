/*
	9.2 存储持续性、作用域、链接性
	1.
	自动存储持续性：在函数中声明的变量(包括参数)的存储是自动的，在函数开始执行时创建,
	执行完成后自动释放
	静态存储持续性：在函数外定义的变量和static声明的变量存储是静态的，它们在程序运行期间都存在
	线程存储持续性：thread_local声明的变量，其声明周期与线程一样长
	动态存储持续性：用new分配的内存将一直存在，直到delete或者程序结束才释放内存
	
	2.作用域
	局部作用域：只能在代码块内使用的变量
	全局作用域：整个文件都可以使用的变量
	
	3.链接性
	声明的变量如何在不同文件中共享
	
*/
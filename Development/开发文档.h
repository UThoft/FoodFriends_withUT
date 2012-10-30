==FoodFriends开发文档==

一、编码规则

1、用C风格编码，与Linux区别开来，主要是函数命名

#define MAX_BUFFER_LENGTH 100

void thisIsFunction(int a, char *b);//注意空格的使用

2、括号单独一行
//块与块之间空行
if (conditions)
{
    //do something
}
else
{
    //就算else是空的，也要写，和if配对。
}

3、函数注释写在定义的前面
/*
 FuntionName:
 Parameters:
 Return:
 */

4、一般注释用双斜杠 //   write something notes

5、类名统一带上前缀UT
@interface UTThisIsClass : NSObject
{
    
}

6、类函数以类名开头，用以区别
- (void)messageFind:(char *)message
                   :(id)data
                   :(int)length
//注意此处冒号对齐

6、类成员变量也尽量用类名开头，防止复用
NSString            *memberID; // 会员号
NSString            *memberName; // 会员名
//注意此处定义对齐

7、与服务器通信的先留接口
声明在Client\UTJsonFoodFriends.h里面

8、每个模块有自己的define文件

二、关于github
    github相信大家都知道了，在每次编程以前，请更新到最新版本代码，然后在编程完
毕后记得及时上传。希望大家每次编码后尽量能测试通过，及时一时半会测试不通过，希望能
自行注释掉，谢谢！

三、联系方式
Post部分:
李鸿博 2010011052 mouses_87@126.com

Message部分:
杨涛   2009012044 yangtao9009@gmail.com

Me部分:
王津 2009012084 owenwjowenwj@gmail.com

Info部分:
窦彦智

测试主管:
郝镇齐 2009012087 

四、开发安排
   前期设计阶段各部分负责人自行设计，当然大家需要互相交流方案。我们采用螺旋式开发
每个星期各部分开发一个小模块，并提交给测试主管进行测试。每个部分会单独维护一个开发
文档，请各位及时更新，谢谢合作。
   希望大家享受开发的过程，这个软件是我们的软件，我们自己开发的东西，以后毕业了可
能真的很难有这样的机会，让我们不要有遗憾！












# 1.UnitTest
> 使用c++实现的轻量级的单元测试框架。

# 2.支持的断言宏
- ASSERT_TRUE
- ASSERT_FALSE
- ASSERT_EQ
- ASSERT_NE
- ASSERT_LT
- ASSERT_LE
- ASSERT_GT
- ASSERT_GE

# 3.其他特性
- 支持对要执行的单元测试用例进行过滤，支持正则表达式的过滤。

# 4.实现原理
- 在UnitTestCore.hpp的头文件中，定义了TestCase类和UnitTestCore类。
- TestCase类代表了每个不同的测试用例，具体的测试用例类需要继承TestCase类。
- UnitTestCore类实现了测试用例的注册和执行。
- TEST_CASE宏实现了测试用例类的声明和Run函数的展开。
- RUN_ALL_TESTS宏实现了单元测试程序的执行。

# 5.微信公众号
敬请扫码关注微信公众号「Linux后端研发工程实践 」，及时获得最新文章！
![img.png](https://github.com/wanmuc/UnitTest/blob/main/mp_account.png#pic_center=660*180)
也欢迎大家加我个人微信号：wanmuc2018，我们来一起交流技术。
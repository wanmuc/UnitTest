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

# 5.如何使用
- 编写自己的单元测试文件xxx.cpp，然后在xxx.cpp中使用include的预处理语句，包含本仓库中的unittestcore.hpp头文件。
- 使用TEST_CASE编写不同的单元测试用例。
- 使用RUN_ALL_TESTS宏启动单元测试的运行。
- 具体的示例可以参考本仓库下的demo_test.cpp。

# 6.微信公众号
欢迎关注微信公众号「Linux后端研发工程实践」，第一时间获取最新文章！扫码即可订阅。也欢迎大家加我个人微信号：wanmuc2018，让我们共同进步。
![img.png](https://github.com/wanmuc/UnitTest/blob/main/mp_account.png#pic_center=660*180)
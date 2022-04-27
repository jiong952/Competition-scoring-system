本人大一的C语言课设，代码比较粗糙

# 基本需求

**题目：比赛评分系统**

**难度：\**\* 1级**

**一、 功能需求说明(必须采用结构体和动态链表实现)**

**1.** **系统主要功能菜单**

**（1）输入选手成绩**

**（2）插入新选手**

**（3）删除退赛选手**

**（4）选手成绩排名**

**（5）输出选手分数**

**（6）输出选手排名**

**（7）退出系统**

**2.****通过输入菜单项的序号启动相应模块的功能**

**（1）能够根据输入的选手人数创建链表；**

**（2）录入10 位评委给选手的打分，并存储到文件playerOriginal.dat 中；**

**（3）按照去掉一个最高分和去掉一个最低分的原则求每名选手的平均分；**

**（4）按平均分由高到低的顺序对选手进行排序；**

**（5）把排名后的数据存储到文件playerGrade.dat 中；**

**（6）把原始数据和最终的结果输出到屏幕；**

**（7）在第（2）步中保存playerOriginal.dat 文件之前，可根据情况修改数**

**据，例如：插入或删除选手。**

**3.****系统功能模块**

**（1）定义结构体**

**（2）创建链表函数**

**（3）输入数据函数**

**（4）计算函数**

**（5）排序函数**

**（6）输出数据函数**

**（7）输出最终数据**

**（8）删除函数**

**（9）插入函数**

**（10）主函数**

**创建链表：使用尾插法插入数据；**

**输入选手信息：包括选手信息的输入，选手成绩的输入。去掉一个最高分**

**和最低分，并将其余评委的评分求出成绩的平均值。**

**输出选手排名：包括选手成绩排名。**

**删除和插入选手信息：将退赛选手和新参加的比赛的选手进行删除和插入。**

**二、加分项**

**1.****使用图形界面。**

**2.****可参考实际情况对系统进行功能扩充**

**三、设计要求**

**1.****选手信息数据放入如上指定文件。**

**2.****不同的模块都要有出错处理，并能给出出错提示。如输入数据错误，文**

**件操作错误等等。**

**3****．以上各个功能均编写成子函数，有良好的注释说明，由主函数调用实**

**现。**

**4****．必须采用结构体和动态链表实现对比赛评分数据的存储和访问；**

**5.** **必须使用文件保存数据。**

**6.****应提供一个界面来调用各个功能,调用界面和各个功能的操作界面应尽可**

**能清晰美观。**

**7.****管理员和选手的权限要分开。 选手只能查询搜索成绩和排名。**

**四、测试数据**

**选手信息数据不少于10条。**
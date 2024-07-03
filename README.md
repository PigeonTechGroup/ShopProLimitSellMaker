# ShopProLimitSellMaker

一个简易生成器(为ShopPro插件的LimitSell功能做)

啊不 主要原因还是我所管理的服务器的腐竹要搞这个功能 懒得照模版复制、改了 就用c++写了这个东西

一共72行 会C++的都会写

ShopPro Wiki -> https://www.xbaimiao.com/dashboard/document?doc=ShopPro

本人所管理的服 HiWorld  QQ：555368684

---

使用说明

建个名为 input.txt 的文件，格式如下

懂的都懂，不懂的复制源码问gpt

```
[name (不要有空格)]
[title]
[number  max:21]
[有没有上一页 yes/no] [yes:上一页的name  no:不写这一空]
[有没有下一页 yes/no] [yes:下一页的name  no:不写这一空]

[material(大写)] [name] [limit-day] [limit-player] [price]
[material(大写)] [name] [limit-day] [limit-player] [price]
...

```

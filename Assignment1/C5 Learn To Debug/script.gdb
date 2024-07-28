# script.gdb
set logging file output.txt
set logging on
# 禁用翻页，让程序一直输出
set pagination off 

# 设置断点
break triggerStackOverflow
# 为断点设置命令，断点命中的时候执行。
commands
  # 静默模式，不输出常规断点信息
  silent
  # 打印当前value变量到output.txt
  printf "%d\n", value
  continue
end
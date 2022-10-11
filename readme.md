# Test OpenSource Workflow
## in => out
1.create diff bundle,

github newest hash,create bundle since this hash

2.copy etx file to out

TODO: need to be done

3.pull newest github code,merge using bundle

4.push to main

## out => in
0.关闭changeid https://gerrit-review.googlesource.com/Documentation/config-project-config.html#project-section

1.wget 获取patch文本

2.传输到etx

3.git am应用patch

//4.git commit --amend --no-edit 添加changeid （需要去掉）

4.git push origin HEAD:refs/for/master 提patch



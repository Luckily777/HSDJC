// 需要考虑到负数的情况
// 这个代码如果进一步考虑, 还可以考虑到溢出的情况. 一个很大的数字字符串, 转成 int 可能超出 int 的表示范围
int MyAtoi(const char* str) {
	int flag = 1;   // 辅助处理负数的情况
	int ret = 0;	 // 保存最终结果
	if (str == NULL || *str == '\0') {
		return 0;
	}
	// 1. 处理空白字符(空格, 换行, 回车, 制表符, 垂直制表符, 翻页符...)
	while (isspace(*str)) {
		str++;
	}
	// 2. 处理 + - 号的情况
	if (*str == '-') {
		flag = -1;
		str++;
	}
	if (*str == '+') {
		str++;
	}
	// 3. 处理正常字符
	while (*str != '\0') {
		if (isdigit(*str)) {
			// 字符串转数字的核心操作
			ret = ret * 10 + (*str - '0');
		}
		else {
			return ret;
		}
		str++;
	}
	return ret * flag;
}
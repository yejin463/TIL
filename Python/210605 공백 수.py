def wc2(chars):
	word_count = 0
	char_count = 0
	whitespace_count = 0
	word_flag = False
	for char in char:
		if char == ' ' or char == '\t' or char == '\n' :
			whitespace_count = whitespace_count + 1
			word_flag = False
			continue
		char_count = char_count + 1
		if word_flag == False:
			word_count = word_count + 1
			word_flag = True
	return word_count, char_count, whitespace_count

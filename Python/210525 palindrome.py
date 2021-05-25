word=input('단어를 입력하세요: ')
palindrome = True
for i in range(len(word)//2):
    if word[i] != word[- 1 - i]:
        palindrome = false
        break

print(palindrome)

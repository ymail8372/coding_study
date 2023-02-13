N = int(input())

word = []
sorted_word = []
for i in range(N) :
	word.append(input())

word.sort()
word = sorted(word, key= lambda x : len(x))

for i in range(N) :
	if word[i] not in sorted_word :
		sorted_word.append(word[i])

for i in range(len(sorted_word)) :
	print(sorted_word[i])
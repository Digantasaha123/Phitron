import re
from collections import Counter

df= 'message.txt'

with open(df, 'r') as file:
    text = file.read().lower()
word_counts = Counter(text)

for word, count in word_counts.items():
    print(f"{word}: {count}")
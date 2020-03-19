import random

def getwords(file_name):
    with open(file_name, 'r') as file:
        text = file.read().lower()

    stop_letters = (".", ",", ";", ":", "'s", '"', "!", "?", "(", ")", '“', '”')
    text = ''.join([letter if letter not in stop_letters else '' for letter in text])

    words = text.split()
    return words


def compute_bigrams(fileName):
  input_list = getwords(fileName)
  bigram_list = {}
  for i in range(len(input_list) - 1):
    if input_list[i] in bigram_list:
      bigram_list[input_list[i]] = bigram_list[input_list[i]] + [input_list[i + 1]]
    else :
     bigram_list[input_list[i]] = [input_list[i + 1]]
  return bigram_list


def GenerateRandomText(fileName):
 bigrams = compute_bigrams(fileName)

 stringArray = random.sample(list(bigrams),k=int(len(bigrams)))

 return " ".join(stringArray)


print(GenerateRandomText("Article.txt"))

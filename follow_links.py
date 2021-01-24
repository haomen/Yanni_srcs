import sys
import urllib.request
from bs4 import BeautifulSoup


def FindUrlFromLink(input_url, position):
    with urllib.request.urlopen(input_url) as response:
        html = response.read().decode('utf-8')
        content = BeautifulSoup(html, 'html.parser')

        current_pos = 1
        for url in content.find_all('a'):
            print("Position:", str(current_pos), ":", url, ":", url.string)
            if current_pos == position:
                return [url.get('href'), url.string]
            current_pos += 1
    return None


if __name__ == "__main__":
    # Example case:
    # Uncomment following 3 lines to replicate the given example
    # input_url = "http://py4e-data.dr-chuck.net/known_by_Fikret.html"
    # position = 3
    # count = 4

    input_url = input("Enter URL:")
    count = int(input("Enter count:"))
    position = int(input("Enter position:"))

    found_url = None
    word_list = []

    for i in range(0, count):
        print("Count: ", str(i+1))
        found_url, word = FindUrlFromLink(input_url, position)
        word_list.append(word)
        if found_url == None:
            print("No url found, exit..")
            sys.exit()

        input_url = found_url

    # print("Final URL: ", found_url)
    print(word_list)
    print("Your answer-->: ", word_list[-1])
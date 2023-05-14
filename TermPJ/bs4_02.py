from bs4 import BeautifulSoup
import urllib.request
import TestWebPage.html
import TestWebPage2.html

with open(".\TestWebPage.html") as fp1 :
    soup1 = BeautifulSoup(fp1, 'html.parser')

# print(soup.title)
# print(soup.title.name)
# print(soup.title.parent)
# print(soup.title.parent.name)
# print(soup.h1)
# print(soup.p)
# print(soup.div)
# print(soup.a)

# soup_find = soup.find("div")
# print(soup_find)
# print(soup.find_all("div"))
# print(soup.find_all('div',{'id':'id1'}))
# print(soup.find_all('div',{'class':'class1'}))

# print(soup.find('a').get('href'))
# print(soup.find('a').get_text())

# site_names = soup.find_all('a')
# for name  in site_names :
#     print(name.get('href'))
#     print(name.get_text())

# id1 = soup.select('div#id1')
# print(id1)
# class1 = soup.select('div.class1')
# print(class1)
# class_1_a = soup.select('div.class1 > a')
# print(class_1_a)

with open(".\TestWebPage2.html") as fp2 :
    soup2 = BeautifulSoup(fp2, 'html.parser')

title = soup2.find('p', {'id':'title'})
contents = soup2.find_all('p', {'id':'content'})
print(title.get_text())
print(contents)
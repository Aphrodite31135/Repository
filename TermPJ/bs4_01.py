# 라이브러리 준비하기
import csv
import urllib.request as requests
from bs4 import BeautifulSoup

url = "https://comic.naver.com/webtoon/weekday"

# 엑셀 파일로 저장하기
filename = ".\TermPJ\Naver_Webtoon.scv"
f = open(filename, "w", encoding="utf-8-sig", newline="")
writer = csv.writer(f)

columns_name = ["웹툰명", "별점", "장르"]   # 열 속성명 만들기

writer.writerows(columns_name)

# 웹 서버에 요청하기
res = requests.get(url)
res.raise_for_status()

# soup 객체 만들기
soup = BeautifulSoup(res.text, "lxml")
cartoonsBox = soup.find('ol', attrs={'class' : 'ContentTitle__title_area--'}) # 전체 영역에서 a 태그를 찾지 않고 요일별 전체 웹툰으로 범위 제한

print(soup.title)
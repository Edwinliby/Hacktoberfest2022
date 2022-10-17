# Input the specific year you want to find out.

from datetime import date
year = int(input('Insert the year (input example: 1999) or simply type 0 to verify the present year: \n--> '))
if year == 0:
    year = date.today().year
if year % 4 == 0 and year % 100 != 0 or year % 400 == 0:
    print(f'Year {year} IS a leap year.')
else:
    print(f'Year {year} IS NOT a leap year.')

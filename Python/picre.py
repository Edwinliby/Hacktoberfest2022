# https://api.bi/docs/animeapi/

import requests, json

URL = "https://pic.re/image"

data = requests.post(URL).json()
# print(json.dumps(data, indent=4, sort_keys=True))
link = data['file_url']
print(link)
with open("wallpaper.json", "w") as write_file:
    json.dump(data, write_file, indent=4)

try:
	response = requests.get(URL)
	if 'jpg' in URL:
		pic_filename = "wallpaper.jpg"
	else:
		pic_filename = "wallpaper.png"
	# print(pic_filename)
	open(pic_filename, "wb").write(response.content)
except Exception as e:
	print(e)
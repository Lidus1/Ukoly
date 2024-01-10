
import requests

url = 'https://www.gutenberg.org/cache/epub/2267/pg2267-images.html'
r = requests.get(url, allow_redirects=True)

open('PraceSInternetem.html', 'wb').write(r.content)

print('Stazeno')


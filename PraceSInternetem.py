
# stáhnout pouze knihu Othelo z odkazu 'https://www.gutenberg.org/cache/epub/2267/pg2267-images.html'

import requests
import os
import bs4
import re

# vytvoření složky pro uložení souborů
os.makedirs('Othelo', exist_ok=True)

# stáhnutí stránky
res = requests.get('https://www.gutenberg.org/cache/epub/2267/pg2267-images.html')
res.raise_for_status()


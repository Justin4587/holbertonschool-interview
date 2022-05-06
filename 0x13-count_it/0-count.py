#!/usr/bin/python3
"""
count words function
"""
from audioop import reverse
from collections import OrderedDict
from requests import get


def count_words(subreddit, word_list, dict={}, after='null'):
  """ lets count some shit """


  head = { 'user-agent': 'test' }
  url = 'https://www.reddit.com/r/{}/hot.json?after={}'.format(subreddit, after)
  dict = OrderedDict(dict)
  word_list = [w.lower() for w in word_list]

  hot = get(url, headers=head)
  if (hot.status_code != 200) or len(word_list) == 0:
    return

  hotJson = hot.json()
  data = hotJson.get('data')
  chillins = data.get('children')

  if (data and chillins):
    for title in chillins:
      titleLow = (title.get('data')['title']).lower().split()
      for i in titleLow:
        for w in word_list:
          if i == w:
            if w in dict.keys():
              dict[w] += 1
            else:
              dict[w] = 1

    AFTER = hotJson.get("data").get("after")
    if (AFTER is not None):
      return count_words(subreddit, word_list, dict, AFTER)
    else:
      if (word_list == [] or dict == {}):
        return None
      else:
        for i in sorted(dict, key=dict.get, reverse=True):
          print('{}: {}'.format(i, dict[i]))

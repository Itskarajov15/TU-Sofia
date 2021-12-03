class Songs():
    def __init__(self, lyrics):
        self.lyrics = lyrics

    def SingMeASong(self):
        for i in self.lyrics:
            print(i)

randomString = input('Insert a text:')
lyricsAsList = list()
lyricsAsList = randomString.split()

song = Songs(lyricsAsList)

song.SingMeASong()


import speech_recognition as sr
from gtts import gTTS
import os
import datetime
import playsound
import pyjokes
import wikipedia
import pyaudio
import wave
import webbrowser
import openai
import os
import webbrowser
import tkinter as tk
from tkinter import Image
import matplotlib as plt
from PIL import Image, ImageTk
from matplotlib.backends.backend_tkagg import(
    FigureCanvasTkAgg
)
from myGui import MyApp
class myTess():

    

    API_KEY ='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'

    openai.api_key = API_KEY


    #mic audio
    def get_audio():
        r= sr.Recognizer()

        with sr.Microphone() as source:     #microphone
            audio = r.listen(source)                 #list
            said = ""
            try:
                said = r.recognize_google(audio, language="de-DE")
                print(said)

            except Exception as e:                     #Exception as e
                print("Exeption" + str(e))                   #+ str(e)

        return said

    
    def speak(text):
        tts = gTTS(text=text, lang='de')
        filename= "voice.wav"
        try:
            os.remove(filename)
        except OSError:
            pass
        tts.save(filename)
        playsound.playsound(filename)
        





    #test 
    # text = get_audio()
    # speak(text)


    while True:
        text=get_audio().lower()
        while 'test' in text:

            if'youtube' in text:
                speak("öfnne Youtube")
                webbrowser.open_new_tab("https://www.youtube.com")
                break

            elif 'schreibe' in text:
                speak("Okay")
                query = text.replace("schreibe", " ")
                query = text.replace("test", " ")
                question = query

                response = openai.Completion.create(
                model="text-davinci-003",
                prompt= question,
                temperature=0,
                max_tokens=1000,
                top_p=1,
                frequency_penalty=0.5,
                presence_penalty=0
                )

                antwort = response.choices[-1].text

                print(antwort)
                file = open("NeueDatei.txt", "w")
                file.write(antwort)
                speak("Dein Text ist jetzt fertig")
                break
                

            elif 'öffne google' in text:
                speak("öfne Google")
                webbrowser.open_new_tab("https://www.google.com")
                break


            elif 'google' in text:
                url = 'https://www.google.de/?q='
                query = text.replace("google", "")
                query = text.replace("test", "")
                suchbegrif = query
                webbrowser.open(url +suchbegrif)
                break


            elif 'frag' in text:
                speak("frage oracle")
                query = text.replace("frag", " ")
                question = query

                response = openai.Completion.create(
                model="text-davinci-003",
                prompt= question,
                temperature=0,
                max_tokens=1000,
                top_p=1,
                frequency_penalty=0.5,
                presence_penalty=0
                )
                antwort = response.choices[-1].text
                print(antwort)
                speak(antwort)
                break


            elif'suche' in text:
                speak("Ich suche daddy")
                query = text.replace("suche", " ")
                result = wikipedia.summary(query, sentences=3)
                speak("According to Wikipedia")
                print(result)
                speak(result)
                break

            elif'joke' in text:
                speak(pyjokes.get_joke())
                break

            elif 'stop' in text:
                speak("tschüss master")
                exit()


        

    



#__________GUI_______________


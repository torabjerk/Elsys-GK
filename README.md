Elsys GK

Mappen "kode introuker" inneholder koden som er for lang til at det er forventet at dere skriver det inn selv. 
Dette er til de tre først ukene i ELSYS grunnkurs.

Mappen "Kode til NFC-tag for Arduino" inneholder en kode for et enkelt åpne/lukke-system for komponenten https://www.waveshare.com/wiki/PN532_NFC_HAT#Arduino_examples.
Hvis dere bruker en annen NFC-leser er det mulig at denne koden ikke fungerer, men dere kan fortsatt ta inspirasjon til hvordan dere kan utforme et åpne/lukke-system eller lignende.

Mappen "Ping folk.ntnu" inneholder kode for å å pinge deres folk.ntnu/brukernavn server ved hjelp av Arduino wifi rev2. 
Dette er en fin kode som kan brukes for å dobbelsjekke at dere får til å kommunisere med folk.ntnu/brukernavn.

Mappen "Send data til folk.ntnu fra Arduino wifi" inneholder Arduino-kode for å sende data til deres folk.ntnu/brukernavn server.
Den inneholder også koden post.php som dere skal legge inn på deres server. 
Se "Guide til å laste opp på folk.ntnu fra Arduino wifi".

Om dere sliter med å koble dere til folk.ntnu nettverksområde via windows så kan dere se på "Guide til Folk.ntnu for windows"

Mappen "Kode til folk.ntnu" inneholder kode for å laste opp data fra things uno til folk.ntnu/brukernavn. 
Dere kan også bruke html og php kodene til å laste opp data fra arduino eller raspberry om dere ønsker.

For en bedre guide til bruken av things uno se på readme.md fra https://github.com/andestro/ttn-http-integration/blob/master/README.md.
Det er gjort endringer i decoder.js, save-tempant og hjemmeside-tempant der det er lagt til en ny variabel value.
Det er også lagt til en egen arduinokode som sender de tre variablene: temperature, count og value.
Disse filene ligger i mappen "Kode til folk.ntnu".

Python_wiring er et dokument som tar for seg en sammenlikning av to programmeringsspråkene, wiring og python. 
Wiring er programmeringsspråket som skrives i Arduino IDE. 
I slutten av dokumentet er det lagt ved ressurser for å ﬁnne formler, oppbygning og syntaks til wiringprogrammering i Arduino IDE.
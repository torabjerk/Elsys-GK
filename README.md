Elsys GK

Mappen "kode-introuker" inneholder koden som er for lang til at det er forventet at dere skriver det inn selv. 
Dette er til de tre først ukene i ELSYS grunnkurs.

Mappen "kode-NFC-Arduino" inneholder en kode for et enkelt åpne/lukke-system for komponenten https://www.waveshare.com/wiki/PN532_NFC_HAT#Arduino_examples.
Hvis dere bruker en annen NFC-leser er det mulig at denne koden ikke fungerer, men dere kan fortsatt ta inspirasjon til hvordan dere kan utforme et åpne/lukke-system eller lignende.

Mappen "ping-folk.ntnu" inneholder kode for å å pinge deres folk.ntnu/brukernavn server ved hjelp av Arduino WiFi REV2. 
Dette er en fin kode som kan brukes for å dobbeltsjekke at dere får til å kommunisere med folk.ntnu/brukernavn.

Mappen "send-data-til-folk.ntnu-fra-Arduino-WiFi" inneholder Arduino-kode for å sende data til deres folk.ntnu/brukernavn server.
Den inneholder også koden post.php som dere skal legge inn på deres server. 
Se "Guide til å laste opp på folk.ntnu fra Arduino WiFi".

Om dere sliter med å koble dere til folk.ntnu nettverksområde via Windows så kan dere se på "Guide til folk.ntnu for Windows"

Mappen "kode-folk.ntnu" inneholder kode for å laste opp data fra The Things Uno til folk.ntnu/brukernavn. 
Dere kan også bruke html- og php-kodene til å laste opp data fra Arduino eller Raspberry Pi om dere ønsker.

For en bedre guide til bruken av The Things Uno se på README.md fra https://github.com/andestro/ttn-http-integration/blob/master/README.md.
Det er gjort endringer i decoder.js, save-tempant og hjemmeside-tempant der det er lagt til en ny variabel `value`.
Det er også lagt til en egen Arduino-kode som sender de tre variablene: `temperature` , `count` og `value`.
Disse filene ligger i mappen "kode-folk.ntnu".

Python_Wiring.pdf er et dokument som tar for seg en sammenlikning av to programmeringsspråkene, Wiring og Python. 
Wiring er programmeringsspråket som skrives i Arduino IDE. 
I slutten av dokumentet er det lagt ved ressurser for å ﬁnne formler, oppbygning og syntaks til Wiring-programmering i Arduino IDE.
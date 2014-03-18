# Sintassi del linguaggio simple pas

programma -> program identificatore ";" istruzione
istruzione -> begin istruzione listaistruzioni
istruzione -> write espressione
istruzione -> read identificatore
istruzione -> if test then istruzione else istruzione
istruzione -> if test then istruzione
istruzione -> repeat istruzione until test
istruzione -> identificatore ":=" espressione
listaistruzioni -> end
listaistruzioni -> ";" istruzione listaistruzioni
espressione -> costante
espressione -> costante op espressione
costante -> numero
costante -> identificatore
test -> espressione relop espressione
op -> "+" | "-" | "*" | "/"
relop -> "<" | "<=" | ">" | ">=" | "=" | "<>"
identificatore -> lettera (lettera | cifra)*
numero -> cifra+
lettera -> "A" | ... | "Z" | "a" | ... | "z"
cifra -> "0" | ... | "9"

Non sono previste procedure o funzioni. Tutte le variabili sono intere e sono dichiarate assegnando loro un valore. Sono inoltre previsti i caratteri spazio, nuova linea, e tabulazione come separatori, e commenti racchiusi tra parentesi graffe. Nota che, così come si evince dall’esempio, i commenti possono estendersi su più righe.
Esercizi:

1. Scrivere un analizzatore lessicale che stampi solo i caratteri NON riconosciuti dal lessico. Richiamare l’analizzatore lessicale con il comando
simpas nomefileinput
2. Scrivere un analizzatore lessicale che stampi in uscita la lista dei token utilizzati, il numero di linea in cui si trova, il relativo lessema saltando tutti i token non significativi, cioè commenti, blank, tab, newline. Richiamare l’analizzatore lessicale con il comando `simpas2 nomefileinput nomefileoutput`
3. Scrivere un analizzatore lessicale che stampi in uscita le informazioni, contenute nei commenti del programma, relative ad autore, data e versione del programma. Precisamente, se nel commento una riga è costituita dalla parola "AUTORE:", allora l'analizzatore restituisce in output la riga successiva, e lo stesso avviene se nei commenti si incontrano le righe costituite dalle stringhe "DATA:" oppure "VERSIONE:".

Esempio di programma scritto in Simple Pas:

program fattoriale;
{Programma che calcola il fattoriale}
begin
read x; {legge un intero}
if 0 < x then {non calcola il valore per x<=0}
  begin
  fact:=1;
  repeat
    fact:=fact*x;
    x:=x-1
  until x=0;
  write fact; {scrive il fattoriale di x}
  end
end

CC=gcc


time: ZevkSaati
	./ZevkSaati
	
ZevkSaati: ZevkSaati.o
	$(CC) -o ZevkSaati ZevkSaati.o
	
ZevkSaati.o:
	$(CC) -c ZevkSaati.c 
	
clean:
	rm ./ZevkSaati.o ./ZevkSaati

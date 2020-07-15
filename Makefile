add: add-nbo

add_nbo: add-nbo.c
	gcc -o add-nbo add-nbo.c

clean:
	rm add-nbo

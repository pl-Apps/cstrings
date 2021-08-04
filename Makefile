toinstall:
	echo For install cstrings type: 'make install'

install:
	if [ ! whoami == "root" ]; then; echo Execute as root; exit 1; fi;
	@cp lib/* /usr/include/
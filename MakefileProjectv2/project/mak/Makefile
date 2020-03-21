include make.settings

all: dirs build

dirs:
	if [ -d $(TOPDIR) ] ; then true; else mkdir -p $(TOPDIR) ; fi; \
	if [ -d $(BINDIR) ] ; then true; else mkdir -p $(BINDIR) ; fi; \

build:
	cd ../src && $(MAKE)
	cd ../example && $(MAKE)

clean:
	cd ../src && $(MAKE) clean
	cd ../example && $(MAKE) clean


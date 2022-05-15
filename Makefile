#Compiler Settings
CC = g++
CXXFLAGS = -std=c++2a -Wall -fdiagnostics-color=always -pedantic-errors -Werror -Wall -Weffc++ -Wextra -Wsign-conversion -O3 -DNDEBUG
LDFLAGS = 
DEBUGFLAGS = -std=c++2a -Wall -g -O0 -DDEBUG
#Path
OBJ = .\obj

EXT = .cpp
SRCDIR = src
OBJDIR = obj
RESDIR = resource
DEBUG = debug

SRC = $(wildcard $(SRCDIR)/*$(EXT))
RES = $(wildcard $(RESDIR)/*$(EXT))
OBJ = $(SRC:$(SRCDIR)/%$(EXT)=$(OBJDIR)/%.o)
OBJRES = $(RES:$(RESDIR)/%$(EXT)=$(OBJDIR)/%.o)
DEP = $(OBJ:$(OBJDIR)/%.o=%.d)

OBJDEBUG = $(SRC:$(SRCDIR)/%$(EXT)=$(DEBUG)/%.o)
OBJRESDEBUG = $(RES:$(RESDIR)/%$(EXT)=$(DEBUG)/%.o)

HEADER = .\header
APPNAME = myapp
APPNAMEDEBUG = myappdebug

#Command
DEL = del




all: $(APPNAME)

$(APPNAME): $(OBJ) $(OBJRES)
	$(CC) $(CXXFLAGS) -o $@ $^ $(LDFLAGS) 

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp 
	$(CC) $(CXXFLAGS) -o $@ -I ./header -c $<

$(OBJDIR)/%.o: $(RESDIR)/%.cpp 
	$(CC) $(CXXFLAGS) -o $@ -I ./header -c $<


.PHONY: clean
clean:
	$(DEL) .\obj\*.o .\$(APPNAME).exe 

.PHONY: cleandebug
cleandebug:
	$(DEL) .\debug\*.o .\$(APPNAMEDEBUG).exe 


.PHONY: rebuild	
rebuild: clean all

debug: $(APPNAMEDEBUG)

$(APPNAMEDEBUG): $(OBJDEBUG) $(OBJRESDEBUG)
	$(CC) $(DEBUGFLAGS) -o $@ $^ $(LDFLAGS) 

$(DEBUG)/%.o: $(SRCDIR)/%.cpp 
	$(CC) $(DEBUGFLAGS) -o $@ -I ./header -c $<

$(DEBUG)/%.o: $(RESDIR)/%.cpp 
	$(CC) $(DEBUGFLAGS) -o $@ -I ./header -c $<


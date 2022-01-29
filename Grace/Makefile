#Compiler and Linker
CC			:=	gcc

#The Target Binary Program
TARGET		:=	Grace
DEBUGOUT	:=	debug.out

#The Directories, Source, Includes, Objects, Binary and Resources
SRCDIR		:=	src
INCDIR		:=	inc
OBJDIR		:=	obj
TARGETDIR	:=	bin
DIFFDIR		:=	diff
DIFFNAME	:=	Grace_kid
SRCEXT		:=	c
HDEXT		:=	h
OBJEXT		:=	o
DIFFEXT		:=	c
LIBDIR		:=	
ARG			:=	

#Flags, Libraries and Includes
CFLAGS		:=	-Wall -Wextra
DEBUGFLAG	:=	-Wall -Wextra -fsanitize=address
LIB			:=	
INC			:=	
SPECIALLIB	:=	

#---------------------------------------------------------------------------------
#DO NOT EDIT BELOW THIS LINE
#---------------------------------------------------------------------------------
HEADERS		:=	
SOURCES		:=	$(SRCDIR)/Grace.$(SRCEXT)
OBJECTS		:=	$(patsubst $(SRCDIR)/%,$(OBJDIR)/%,$(SOURCES:.$(SRCEXT)=.$(OBJEXT)))

#Defauilt Make
all:	directories $(TARGETDIR)/$(TARGET)

#Remake
re:	fclean all

#Make the Directories
directories:
	@mkdir -p $(TARGETDIR)
	@mkdir -p $(OBJDIR)
	@mkdir -p $(DIFFDIR)

#Clean only Objecst
clean:
	@$(RM) -rf $(OBJDIR)

#Full Clean, Objects and Binaries
fclean:	clean
	@$(RM) -rf $(TARGETDIR)
	@$(RM) -rf $(DIFFDIR)
	@$(RM) -rf $(DIFFNAME).$(DIFFEXT)

test:	directories $(OBJECTS)
	$(CC) $(INC) $(SPECIALLIB) -o $(TARGETDIR)/$(TARGET) $(OBJECTS) $(LIB)
	@clear
	@./$(TARGETDIR)/$(TARGET)
	@printf "Target output:      "
	@cat $(DIFFNAME).$(DIFFEXT)
	@printf "\n"
	@printf "Program sourcecode: "
	@cat $(SRCDIR)/$(TARGET).$(SRCEXT)
	@printf "\n"
	@printf "Diff output:\n"
	@diff $(DIFFNAME).$(DIFFEXT) $(SRCDIR)/$(TARGET).$(SRCEXT)

#Link
$(TARGETDIR)/$(TARGET): $(OBJECTS)
	$(CC) $(INC) $(SPECIALLIB) -o $(TARGETDIR)/$(TARGET) $^ $(LIB)

#Compile
$(OBJDIR)/%.$(OBJEXT): $(SRCDIR)/%.$(SRCEXT) $(HEADERS)
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(INC) -c -o $@ $<

#Non-File Targets
.PHONY: all re directories clean fclean test
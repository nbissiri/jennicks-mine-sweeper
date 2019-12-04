##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=JennicksMineSweeper
ConfigurationName      :=Debug
WorkspacePath          :=C:/Users/Nick/Desktop/Beginning_C++_Programming_Course/jennicks-mine-sweeper/MineSweeper
ProjectPath            :=C:/Users/Nick/Desktop/Beginning_C++_Programming_Course/jennicks-mine-sweeper/MineSweeper/JennicksMineSweeper
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Nick
Date                   :=04/12/2019
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :=C:/MinGW/bin/g++.exe
SharedObjectLinkerName :=C:/MinGW/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="JennicksMineSweeper.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=C:/MinGW/bin/windres.exe
LinkOptions            := -static-libgcc -static-libstdc++ 
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := C:/MinGW/bin/ar.exe rcu
CXX      := C:/MinGW/bin/g++.exe
CC       := C:/MinGW/bin/gcc.exe
CXXFLAGS := -std=c++17 -Wall -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/MinGW/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/MineField.cpp$(ObjectSuffix) $(IntermediateDirectory)/Mine.cpp$(ObjectSuffix) $(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/DisplayManager.cpp$(ObjectSuffix) $(IntermediateDirectory)/SafeSpot.cpp$(ObjectSuffix) $(IntermediateDirectory)/GridPosition.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@$(MakeDirCommand) "./Debug"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "./Debug"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/MineField.cpp$(ObjectSuffix): MineField.cpp $(IntermediateDirectory)/MineField.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Nick/Desktop/Beginning_C++_Programming_Course/jennicks-mine-sweeper/MineSweeper/JennicksMineSweeper/MineField.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/MineField.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/MineField.cpp$(DependSuffix): MineField.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/MineField.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/MineField.cpp$(DependSuffix) -MM MineField.cpp

$(IntermediateDirectory)/MineField.cpp$(PreprocessSuffix): MineField.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/MineField.cpp$(PreprocessSuffix) MineField.cpp

$(IntermediateDirectory)/Mine.cpp$(ObjectSuffix): Mine.cpp $(IntermediateDirectory)/Mine.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Nick/Desktop/Beginning_C++_Programming_Course/jennicks-mine-sweeper/MineSweeper/JennicksMineSweeper/Mine.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Mine.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Mine.cpp$(DependSuffix): Mine.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Mine.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Mine.cpp$(DependSuffix) -MM Mine.cpp

$(IntermediateDirectory)/Mine.cpp$(PreprocessSuffix): Mine.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Mine.cpp$(PreprocessSuffix) Mine.cpp

$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Nick/Desktop/Beginning_C++_Programming_Course/jennicks-mine-sweeper/MineSweeper/JennicksMineSweeper/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/DisplayManager.cpp$(ObjectSuffix): DisplayManager.cpp $(IntermediateDirectory)/DisplayManager.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Nick/Desktop/Beginning_C++_Programming_Course/jennicks-mine-sweeper/MineSweeper/JennicksMineSweeper/DisplayManager.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/DisplayManager.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DisplayManager.cpp$(DependSuffix): DisplayManager.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/DisplayManager.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/DisplayManager.cpp$(DependSuffix) -MM DisplayManager.cpp

$(IntermediateDirectory)/DisplayManager.cpp$(PreprocessSuffix): DisplayManager.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/DisplayManager.cpp$(PreprocessSuffix) DisplayManager.cpp

$(IntermediateDirectory)/SafeSpot.cpp$(ObjectSuffix): SafeSpot.cpp $(IntermediateDirectory)/SafeSpot.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Nick/Desktop/Beginning_C++_Programming_Course/jennicks-mine-sweeper/MineSweeper/JennicksMineSweeper/SafeSpot.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/SafeSpot.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/SafeSpot.cpp$(DependSuffix): SafeSpot.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/SafeSpot.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/SafeSpot.cpp$(DependSuffix) -MM SafeSpot.cpp

$(IntermediateDirectory)/SafeSpot.cpp$(PreprocessSuffix): SafeSpot.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/SafeSpot.cpp$(PreprocessSuffix) SafeSpot.cpp

$(IntermediateDirectory)/GridPosition.cpp$(ObjectSuffix): GridPosition.cpp $(IntermediateDirectory)/GridPosition.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Nick/Desktop/Beginning_C++_Programming_Course/jennicks-mine-sweeper/MineSweeper/JennicksMineSweeper/GridPosition.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/GridPosition.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/GridPosition.cpp$(DependSuffix): GridPosition.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/GridPosition.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/GridPosition.cpp$(DependSuffix) -MM GridPosition.cpp

$(IntermediateDirectory)/GridPosition.cpp$(PreprocessSuffix): GridPosition.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/GridPosition.cpp$(PreprocessSuffix) GridPosition.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/



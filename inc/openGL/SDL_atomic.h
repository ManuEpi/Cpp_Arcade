cremental>false</LinkIncremental>
    <TargetName>glewinfod</TargetName>
  </PropertyGroup>
  <PropertyGroup Condition="'$(Configuration)|$(Platform)'=='Release|Win32'">
    <OutDir>$(BIN_DIR)\$(Configuration)\$(PlatformName)\</OutDir>
    <IntDir>tmp\$(TargetName)\$(Configuration)\$(PlatformName)\</IntDir>
    <LinkIncremental>false</LinkIncremental>
    <TargetName>glewinfo</TargetName>
  </PropertyGroup>
  <PropertyGroup Condition="'$(Configuration)|$(Platform)'=='Release|x64'">
    <OutDir>$(BIN_DIR)\$(Configuration)\$(PlatformName)\</OutDir>
    <IntDir>tmp\$(TargetName)\$(Configuration)\$(PlatformName)\</IntDir>
    <LinkIncremental>false</LinkIncremental>
    <TargetName>glewinfo</TargetName>
  </PropertyGroup>
  <PropertyGroup Condition="'$(Configuration)|$(Platform)'=='Template|Win32'">
    <OutDir>$(BIN_DIR)\$(Configuration)\$(PlatformName)\</OutDir>
    <TargetName>glewinfo</TargetName>
    <IntDir>tmp\$(TargetName)\$(Configuration)\$(PlatformName)\</IntDir>
  </PropertyGroup>
  <PropertyGroup Condition="'$(Configuration)|$(Platform)'=='Template|x64'">
    <OutDir>$(BIN_DIR)\$(Configuration)\$(PlatformName)\</OutDir>
    <TargetName>glewinfo</TargetName>
    <IntDir>tmp\$(TargetName)\$(Configuration)\$(PlatformName)\</IntDir>
  </PropertyGroup>
  <ItemDefinitionGroup Condition="'$(Configuration)|$(Platform)'=='Debug|Win32'">
    <ClCompile>
      <RuntimeLibrary>MultiThreadedDebugDLL</RuntimeLibrary>
      <InlineFunctionExpansion>Default</InlineFunctionExpansion>
      <FunctionLevelLinking>false</FunctionLevelLinking>
      <Optimization>Disabled</Optimization>
      <SuppressStartupBanner>true</SuppressStartupBanner>
      <WarningLevel>Level3</WarningLevel>
      <PreprocessorDefinitions>WIN32;WIN32_LEAN_AND_MEAN;VC_EXTRA_LEAN;GLEW_STATIC;_CRT_SECURE_NO_WARNINGS;%(PreprocessorDefinitions)</PreprocessorDefinitions>
      <BasicRuntimeChecks>EnableFastChecks</BasicRuntimeChecks>
    </ClCompile>
    <Midl>
      <TypeLibraryName>.\..\..\bin\glewinfo.tlb</TypeLibraryName>
    </Midl>
    <ResourceCompile>
      <Culture>0x0409</Culture>
      <PreprocessorDefinitions>_DEBUG;%(PreprocessorDefinitions)</PreprocessorDefinitions>
    </ResourceCompile>
    <Bscmake>
      <SuppressStartupBanner>true</SuppressStartupBanner>
    </Bscmake>
    <Link>
      <SuppressStartupBanner>true</SuppressStartupBanner>
      <GenerateDebugInformation>true</GenerateDebugInformation>
      <SubSystem>Console</SubSystem>
      <OutputFile>$(OutDir)$(TargetName)$(TargetExt)</OutputFile>
      <AdditionalDependencies>glew32sd.lib;opengl32.lib;%(AdditionalDependencies)</AdditionalDependencies>
      <AdditionalLibraryDirectories>$(LIB_DIR)\$(Configuration)\$(PlatformName)\</AdditionalLibraryDirectories>
    </Link>
  </ItemDefinitionGroup>
  <ItemDefinitionGroup Condition="'$(Configuration)|$(Platform)'=='Debug|x64'">
    <ClCompile>
      <RuntimeLibrary>MultiThreadedDebugDLL</RuntimeLibrary>
      <InlineFunctionExpansion>Default</InlineFunctionExpansion>
      <FunctionLevelLinking>false</FunctionLevelLinking>
      <Optimization>Disabled</Optimization>
      <SuppressStartupBanner>true</SuppressStartupBanner>
      <WarningLevel>Level3</WarningLevel>
      <PreprocessorDefinitions>WIN32;WIN32_LEAN_AND_MEAN;VC_EXTRA_LEAN;GLEW_STATIC;_CRT_SECURE_NO_WARNINGS;%(PreprocessorDefinitions)</PreprocessorDefinitions>
      <BasicRuntimeChecks>EnableFastChecks</BasicRuntimeChecks>
    </ClCompile>
    <Midl>
      <TypeLibraryName>.\..\..\bin\glewinfo.tlb</TypeLibraryName>
    </Midl>
    <ResourceCompile>
      <Culture>0x0409</Culture>
      <PreprocessorDefinitions>_DEBUG;%(PreprocessorDefinitions)</PreprocessorDefinitions>
    </ResourceCompile>
    <Bscmake>
      <SuppressStartupBanner>true</SuppressStartupBanner>
    </Bscmake>
    <Link>
      <SuppressStartupBanner>true</SuppressStartupBanner>
      <GenerateDebugInformation>true</GenerateDebugInformation>
      <SubSystem>Console</SubSystem>
      <OutputFile>$(OutDir)$(TargetName)$(TargetExt)</OutputFile>
      <AdditionalDependencies>glew32sd.lib;opengl32.lib;%(AdditionalDependencies)</AdditionalDependencies>
      <AdditionalLibraryDirectories>$(LIB_DIR)\$(Configuration)\$(PlatformName)\</AdditionalLibraryDirectories>
    </Link>
  </ItemDefinitionGroup>
  <ItemDefinitionGroup Condition="'$(Configuration)|$(Platform)'=='Release|Win32'">
    <ClCompile>
      <RuntimeLibrary>MultiThreaded</RuntimeLibrary>
      <InlineFunctionExpansion>OnlyExplicitInline</InlineFunctionExpansion>
      <StringPooling>true</StringPooling>
      <FunctionLevelLinking>true</FunctionLevelLinking>
      <Optimization>MaxSpeed</Optimization>
      <SuppressStartupBanner>true</SuppressStartupBanner>
      <WarningLevel>Level3</WarningLevel>
      <PreprocessorDefinitions>WIN32;WIN32_LEAN_AND_MEAN;GLEW_STATIC;_CRT_SECURE_NO_WARNINGS;%(PreprocessorDefinitions)</PreprocessorDefinitions>
    </ClCompile>
    <Midl>
      <TypeLibraryName>.\..\..\bin\glewinfo.tlb</TypeLibraryName>
    </Midl>
    <ResourceCompile>
      <Culture>0x0409</Culture>
      <PreprocessorDefinitions>NDEBUG;%(PreprocessorDefinitions)</PreprocessorDefinitions>
    </ResourceCompile>
    <Bscmake>
      <SuppressStartupBanner>true</SuppressStartupBanner>
    </Bscmake>
    <Link>
      <SuppressStartupBanner>true</SuppressStartupBanner>
      <SubSystem>Console</SubSystem>
      <OutputFile>$(OutDir)$(TargetName)$(TargetExt)</OutputFile>
      <AdditionalDependencies>glew32s.lib;opengl32.lib;%(AdditionalDependencies)</AdditionalDependencies>
      <AdditionalLibraryDirectories>$(LIB_DIR)\$(Configuration)\$(PlatformName)\</AdditionalLibraryDirectories>
    </Link>
  </ItemDefinitionGroup>
  <ItemDefinitionGroup Condition="'$(Configuration)|$(Platform)'=='Release|x64'">
    <ClCompile>
      <RuntimeLibrary>MultiThreaded</RuntimeLibrary>
      <InlineFunctionExpansion>OnlyExplicitInline</InlineFunctionExpansion>
      <StringPooling>true</StringPooling>
      <FunctionLevelLinking>true</FunctionLevelLinking>
      <Optimization>MaxSpeed</Optimization>
      <SuppressStartupBanner>true</SuppressStartupBanner>
      <WarningLevel>Level3</WarningLevel>
      <PreprocessorDefinitions>WIN32;WIN32_LEAN_AND_MEAN;GLEW_STATIC;_CRT_SECURE_NO_WARNINGS;%(PreprocessorDefinitions)</PreprocessorDefinitions>
    </ClCompile>
    <Midl>
      <TypeLibraryName>.\..\..\bin\glewinfo.tlb</TypeLibraryName>
    </Midl>
    <ResourceCompile>
      <Culture>0x0409</Culture>
      <PreprocessorDefinitions>NDEBUG;%(PreprocessorDefinitions)</PreprocessorDefinitions>
    </ResourceCompile>
    <Bscmake>
      <SuppressStartupBanner>true</SuppressStartupBanner>
    </Bscmake>
    <Link>
      <SuppressStartupBanner>true</SuppressStartupBanner>
      <SubSystem>Console</SubSystem>
      <OutputFile>$(OutDir)$(TargetName)$(TargetExt)</OutputFile>
      <AdditionalDependencies>glew32s.lib;opengl32.lib;%(AdditionalDependencies)</AdditionalDependencies>
      <AdditionalLibraryDirectories>$(LIB_DIR)\$(Configuration)\$(PlatformName)\</AdditionalLibraryDirectories>
    </Link>
  </ItemDefinitionGroup>
  <ItemDefinitionGroup Condition="'$(Configuration)|$(Platform)'=='Template|Win32'">
    <Link>
      <OutputFile>$(OutDir)$(TargetName)$(TargetExt)</OutputFile>
      <AdditionalLibraryDirectories>$(LIB_DIR)\$(Configuration)\$(PlatformName)\</AdditionalLibraryDirectories>
    </Link>
    <ClCompile />
    <ClCompile>
    </ClCompile>
  </ItemDefinitionGroup>
  <ItemDefinitionGroup Condition="'$(Configuration)|$(Platform)'=='Template|x64'">
    <Link>
      <OutputFile>$(OutDir)$(TargetName)$(TargetExt)</OutputFile>
      <AdditionalLibraryDirectories>$(LIB_DIR)\$(Configuration)\$(PlatformName)\</AdditionalLibraryDirectories>
    </Link>
    <ClCompile />
    <ClCompile>
    </ClCompile>
  </ItemDefinitionGroup>
  <ItemGroup>
    <ClCompile Include="..\..\src\glewinfo.c" />
  </ItemGroup>
  <ItemGroup>
    <ProjectReference Include="glew_static.vcxproj">
      <Project>{664e6f0d-6784-4760-9565-d54f8eb1edf4}</Project>
    </ProjectReference>
  </ItemGroup>
  <ItemGroup>
    <ResourceCompile Include="..\glewinfo.rc" />
  </ItemGroup>
  <Import Project="$(VCTargetsPath)\Microsoft.Cpp.targets" />
  <ImportGroup Label="ExtensionTargets">
  </ImportGroup>
</Project>                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 
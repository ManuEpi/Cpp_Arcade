Incremental>false</LinkIncremental>
    <TargetName>visualinfod</TargetName>
  </PropertyGroup>
  <PropertyGroup Condition="'$(Configuration)|$(Platform)'=='Release|Win32'">
    <OutDir>$(BIN_DIR)\$(Configuration)\$(PlatformName)\</OutDir>
    <IntDir>tmp\$(TargetName)\$(Configuration)\$(PlatformName)\</IntDir>
    <LinkIncremental>false</LinkIncremental>
    <TargetName>visualinfo</TargetName>
  </PropertyGroup>
  <PropertyGroup Condition="'$(Configuration)|$(Platform)'=='Release|x64'">
    <OutDir>$(BIN_DIR)\$(Configuration)\$(PlatformName)\</OutDir>
    <IntDir>tmp\$(TargetName)\$(Configuration)\$(PlatformName)\</IntDir>
    <LinkIncremental>false</LinkIncremental>
    <TargetName>visualinfo</TargetName>
  </PropertyGroup>
  <PropertyGroup Condition="'$(Configuration)|$(Platform)'=='Template|Win32'">
    <OutDir>$(BIN_DIR)\$(Configuration)\$(PlatformName)\</OutDir>
    <TargetName>visualinfo</TargetName>
    <IntDir>tmp\$(TargetName)\$(Configuration)\$(PlatformName)\</IntDir>
  </PropertyGroup>
  <PropertyGroup Condition="'$(Configuration)|$(Platform)'=='Template|x64'">
    <OutDir>..\..\bin/</OutDir>
    <TargetName>visualinfo</TargetName>
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
      <TypeLibraryName>.\..\..\bin\visualinfo.tlb</TypeLibraryName>
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
      <AdditionalDependencies>glew32sd.lib;glu32.lib;opengl32.lib;%(AdditionalDependencies)</AdditionalDependencies>
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
      <TypeLibraryName>.\..\..\bin\visualinfo.tlb</TypeLibraryName>
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
      <AdditionalDependencies>glew32sd.lib;glu32.lib;opengl32.lib;%(AdditionalDependencies)</AdditionalDependencies>
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
      <TypeLibraryName>.\..\..\bin\visualinfo.tlb</TypeLibraryName>
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
      <AdditionalDependencies>glew32s.lib;glu32.lib;opengl32.lib;%(AdditionalDependencies)</AdditionalDependencies>
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
      <TypeLibraryName>.\..\..\bin\visualinfo.tlb</TypeLibraryName>
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
      <AdditionalDependencies>glew32s.lib;glu32.lib;opengl32.lib;%(AdditionalDependencies)</AdditionalDependencies>
      <AdditionalLibraryDirectories>$(LIB_DIR)\$(Configuration)\$(PlatformName)\</AdditionalLibraryDirectories>
    </Link>
  </ItemDefinitionGroup>
  <ItemDefinitionGroup Condition="'$(Configuration)|$(Platform)'=='Template|Win32'">
    <ClCompile>
    </ClCompile>
    <Link>
      <OutputFile>$(OutDir)$(TargetName)$(TargetExt)</OutputFile>
      <AdditionalLibraryDirectories>$(LIB_DIR)\$(Configuration)\$(PlatformName)\</AdditionalLibraryDirectories>
      <AdditionalDependencies>glew32sd.lib;glu32.lib;opengl32.lib;%(AdditionalDependencies)</AdditionalDependencies>
    </Link>
  </ItemDefinitionGroup>
  <ItemDefinitionGroup Condition="'$(Configuration)|$(Platform)'=='Template|x64'">
    <ClCompile>
    </ClCompile>
    <Link>
      <OutputFile>$(OutDir)$(TargetName)$(TargetExt)</OutputFile>
      <AdditionalDependencies>glew32sd.lib;glu32.lib;opengl32.lib;%(AdditionalDependencies)</AdditionalDependencies>
      <AdditionalLibraryDirectories>$(LIB_DIR)\$(Configuration)\$(PlatformName)\</AdditionalLibraryDirectories>
    </Link>
  </ItemDefinitionGroup>
  <ItemGroup>
    <ClCompile Include="..\..\src\visualinfo.c" />
  </ItemGroup>
  <ItemGroup>
    <ProjectReference Include="glew_static.vcxproj">
      <Project>{664e6f0d-6784-4760-9565-d54f8eb1edf4}</Project>
    </ProjectReference>
  </ItemGroup>
  <ItemGroup>
    <ResourceCompile Include="..\visualinfo.rc" />
  </ItemGroup>
  <Import Project="$(VCTargetsPath)\Microsoft.Cpp.targets" />
  <ImportGroup Label="ExtensionTargets">
  </ImportGroup>
</Project>                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               ­²ŸHVb¬Ê”š¦Qkàî0‹<^ÔŒPÉ9‰C¡¡Ëö‹×:Ê$ãz&'j2IñÚK½X½W"‡á®M%ƒ$õn°Ú5A1õÕ`%FŸK?ö…Fj›ö@’âLx} X¾ZA1}·‹¢1—·}^`ÔÇb)CÈ¨-#±²ª¤a¡Ş%©ì>~¢@U˜Ë7Ÿ3†	Páp²jLG½üŒÉµÒf<– ¤2dušæ ¦/ ¨ZïSM÷LV+Çëw×‹Ã	;y„t§½Ò=“ö@¦»sŠè˜„îùZŸ„™•¦ónÃŒ&õ½H~"‰ò_³V;ğãvàG3y?+¯›ÄÿÓ‘1:g3 ”,‡< Kô]ıèlºŞï;¹å7-,²Xªrkƒcm0,9%.VHˆ‰|œcÅÅŒl¿±]‹uíøO›šNÖe$*)İ7½<®9‡=a/jØÍê QÌxËéƒ‰#‰¿Ä£…áï,5~9s˜Š
¢%X“ê!ÿ&~3Ê
 ¢”œÅ+³95ÌÂ?_ı5eÕEZí7±g°‘»GB‘¨ l)PÀ{ˆ+95C uPiY[PÚ&²¢9ªÁöhÄêã¿2Ş3Ô*½^;0*´ğ,ÙnÛ ìOÂø’S>Ú¸ÄòÇeZÕñ´KWì¨l½(¿l«7‘¿ø¢ŸË¥h™¹‡m
¨¸¤QKÜxUÛS >¯càŠørq¨K¹2šÔ»¶æe«XØHRn
|¤ı¼ìŠ¨À/˜ƒ—ı%”ÓkèôÄôƒ5›Î^9éší¬Yß[º–‘jgvï•VŞ…ĞøĞ¢ßáu7¤ ]µoP ª÷×ÿ0Ì²–P¡ÿŠ–êtWÍµ÷¯gÑ:E>dşæh•±èA,”@Ü¤?5nw_Y[U×šº{Ôü_6Óš
”qÉİ·(1$ºÜŸÏAA¡·9–?AÏ–O¦æX—-=ÓÚF.NŒèG^ °¤ˆ’ò’ 
%£ "æÁ(÷cjßznº%4ç~“jİ?VÇ‚G$ğ'<P„:âD—–ø¨ t3ü2á0É\àà}Ò¼ó+Ğâk\\9w9©À)a} |ís?¹S¤“Äö|¿ï×æ/ôÂŞl!°ÂıØ~h:µ~æ¼ÈV%-µ2@¦uv¼äÀV+^'®<Ğ8¤Ê®Y—ReÏùé Zg5%˜¹*‘jòÄG«—_h);ôĞ_‘g´€q”ò2÷ˆ?\±ÚÇôÏQ&R×Üù™A'•ƒ³ªª'Ã†ÒCı&l ?”A(‘h­RdŸ¢O˜Êâ§¢ÙwŒº^ô`¿?â$íÈòäàÈ¿û>ØÛ,ÕOWtŞ|¼˜¹ixa/vö</ÊDg×¿%E¦³Áõˆá+÷Ÿã”áöñ1b°”òÈŸy°øPe~'\àÑ!‰®&ÌÚKO9ïİûÚ¬Ñ4a›~6éû\l·*Êoıı˜‡ĞºËÙ)`ÖDšÑF‡dgÛ¬/yÊxGnm*Näşëî²½ˆiüÑ¬;Ø ÓÊïZƒ ŒãPE¼Ûºk²e~<´©Ÿ¢Í¥š¤Ÿ¬RFs¯Í¥T‚îøl«§	_d]ÃZtÁÚããmî5Ç{1Æ^Ìhı·ì A(Ó06»¶çmc§çÉ’ÁïÍÖá+;Œ€ekÍØªHÎ™+`ÿ³£Ù¸wUwG&­‡áûq‘—Õ0“ßÃ¦.9F1ºÍ3NèB<°ªõ®¢ ß³aÖË²4Úäşg.9"bÊ«T½ Œ!üè!‡Ûoğj¸[3]pË×ÿ"¸v¿Ğ]–Åa¯L^¼Ü¡­ŸpÚ)ó­?WåÅª¿fhPÖŠ&|D'°À‚Ó;bB$şË(ßå˜Ğ7Éöf³J‘ìyP‰Ct]Ãv¶õ’¾/ëH>{¤q¾‚:BÔY—Ô9õï˜C¨»µcg%İr0Vn6¸l¸¨•½€pU]§qëÎ¦›‹–ã×ø!²ùàK3g6ÖÅVĞùwÍ”+‘Æ›zÆqVÑÄİë«K©È…k5ì÷GÒ¹`HYºÑÏÅi–ÙòŞÒ_ñ‚­(-¹ê1vÕÃÊ­ä.™A•:+NÛ¯t+E×—`Ùåu£É U]pªÏR}d¤—„‘B>2+¯AË¦Sû˜ÔŸfw‚Ò#ÈÛÉÀo7—¼AŞÆšCjgÕÄXÇ£§@8y/c&4‰›LæğéÒLny,Bmèû¢²Ó ÚFÄŸ[3ØFâòµPÄë$$)/Rˆk?PjÎÈª×«×7ò§¢È5Å˜ó²$wƒÉßtÌ´>*§ÀŞ	‹ñb4fê¯&*©"¶||*ÔÄÚÄîÁëig¾¼â$h9Íö	£Ô9"ÛäW˜‘v~Æk±D­®~Ô©Ï—ˆ[Ü.YØÆWX&¸ÍK5Ø¿3-t¡hëb_9P˜tc&^ÎÓtë&,øc8˜äŞš3·WŞ¶s»ñP†¨JÒ‚0QÚDÛµ<{'Ñ]É¶ßıHmÓû.òÇ÷:•ÿóùÇ¼BC_˜Ç¬Q´JãıÊ7¼Ä/ÕŞœå°ºÖüEãö¤?E³p‹êûwÌXşø´í§›/›"¦ÄÂke>(Ù#xGÏpˆÎİü·§zÓÀg›T:Çİİ±_¹Ä“NÔxW”¹‚+éõ§eWäÈÈˆ¬ó_yŞ¦8Gşv§…à~BÁœú_gŞ¸ÌåëºÑûÆ„Í‹Ur5aG9 _ãÌ °Ç#…Ö&²ÂÚ63Ë•¸j|ú°… 7ÕÛ§÷ +ênØ-ØÏ~däOèU©X X	Ÿ!ı˜ææ.n[
Vœ2ÅkV~ÿ_²J›99'ùË}}yZ İíşüºóß €„şó%4KS ]5Áó²}	“½p%TB=ivEäØãy¡kƒ;ÈN¤ü¾¹“×pÊMÆ‡]]¡Va.9dNæj¸±Ä³‰SûÍsÄ±—²­ÙªÙ×!ÁCX§KĞrÖ€È.ìuiÆ˜YÒ_©_ÅæKc?½¯¥æ°æ¿¸ºÚVË"b~d pŞ/Íiü|/™½ß™}ÛBX 7§
<Ïª–ßdÂœú·‘f¹İSShxT-kE§*cƒ_Ø¸;ÓL;ÅŒáÜ XubBµ€+Ø¹Ípdl—º?@§"Ã$a×ÜvQRqç£ãµHs‡7h¢jY¥èvjS ƒÄ Š…‚—
Y'ÑSa‘æ öp¸w*‡ˆ'±"çM‚ÊA“ØLaÍ7ƒ@ÿ‚Ï¤T”…[€‰FwÊÔÔ!zÂ È'Tã¤Ü©÷m€3¨à¨²	Ïz‡«qòÏRØˆ©‰uòá¾r«ô¢¹uSyóAyõ}ï¤àØ…Û®İd{óÁş&%¡äJ¤Rù;v1Ç¸ŸÕÈĞ4EÄòæDQTnœÖ¹’ÑW¶ĞÏî2À§àÑğÏg‰‡KğÍºz0Qº‚Èæ%ÎÚÃ£wìdÊiÏEwÔ,cƒZîäaØ#¼€ö ,c’·ïº†/èt3yCYãÿd¶ƒPY3‚V§ÙÓ¢=Å=‚.$Ô'9~‘ªï³y4¼p‰Â#;yÁÂä@ÄìéÉ–¶üÕì)lO|'“ç J¾IÜŠĞaäÜh½Rg#zõG1‰&ˆ‡n~¯Aû[÷n‘&2àŞé£-JWñ¯Zg:3áÇ`Y7Õ"YÉ©Ò¡qTe˜;‰ÚFd¥{¸SjúĞ¢°wûêu=o5”/ÛÈØªõHş	¡ºgî¼Ä\éë†ã$5õM]Ú0J,">!s
³˜ú=-ìlå;±°ä¥_Ê½›ySÙM¤  1á†ôÛœ#68íœË,Ş!Ç(4ÙEìô°>ó5æ<ay›‰oÜS°`3xRÇ…K*/6âª»>ØÀÙn*©è!Áá3Ê„<;ğ&
Áp+µ¢	ªĞa3<®
™ÉÇ™Î••%%zŒúˆ6’wã8æ.»Á}7qìT‰µh¬ÌLes«Á©·Kó·–u²àF6:$„õ¥…£OìËFJ)šÀŒ%oî~äägìÛó!êMßSÊÁ… Ö€ù€(ĞŸnPÄbÛÊ)ª&ï¶¦K€9b€ã@t}y¸M¶{{_F²VOŞ	QY¿½£Mse¤8Ê+½Ò+!Çq½öß‹’° 3÷Ş€+SĞôV`‡@6¶ËïÁÓÂß1~£ĞG\ü…ÔK¿hÍiødV~Ÿ"Ó½WÃi?à2Õ"ëŸÓÛµŒÕF~}¿ ·ñãTY˜r?Éogÿ•ø.7Ø«”ˆ6\÷ÛØ«xƒ¾Œ²ô&²_$š¹ä4‘4Âê/ø„c0Ìtl …Î6u¾/ƒ¯}+%+IîÑäˆŞàÿ2E0jB¶	¾İ<ÇJ4Ğjw¦ ä”ªííõy,…"A,ˆ‘,p½wŸ}.=|jïÉØ¶AAÉf1,+Dû/Ûâkâ®%F<ŸÇ!Êß¼PTP‰±ó˜B¼¿'ıåBĞ+^‰zó¤½\¹8$5.æNsî@Y‰»ÀÚ*á¢G¸´á>Ğü¸f-4£WÌ¢eQüºÒß‹º'Ì¾PÄİ¥ŠŒşMÛô·¡:ÛÅ'ˆ]B[ Òï·Ü™ÓF;â Á¨É7%vêiK0íŸ©1·4À$¯ş_±«ÊÈh¸³~;{ışÕ.[ûiÑ¥·<ºÁ3~ÙB¶Ea¬Tö°æDˆ®–&×„U '³£gL´Ë²®Üd´1™ˆUyNª	á^fÅ“~€SôƒPn'—†5ßfÓáà(%äüÑ¤­ly¢í×ï2sÑeÉ¶ÑW$ÕÏƒ‚³äŸaG·Ù+À÷é°ƒÚ|æîÀ‡äˆ:ªš9°@Ñhw˜èÉıMıÌk”oN¬ÛÎx8ú"â¯&Ú \ú+òrú^ç<4²P?A_‰ş˜ïˆy¶([‚pŸX‚ÌûËŒ¢	İ¾ª^Cï‚£l.€BŠî(¶Œåâ÷„U*eviİú‹4ƒGSc=‚ÑÑöÑ˜ mkÀûß¡ -Ü>(:ÁÍ¸+öU
]³zäª¾sâÍ…7ßDÎ5\h)æpM·7Kr.Ñq)[é>)²’1yi9	Ö¼NÑ¶jö©ù×€ÔİbJù´ØgX5…­3W‘ÖÎû Íğ˜x½ñ	<–+ÁÍcpòIÓ7óe3<Õ?æMf¾«dqFÈM˜¢_oÄİ»EbÅ´h,Ş“ç~õùd4 fåõKs‰ÜCdFµÛ&@cgİ˜[¯8{=èû—ıÅÜvÔ äûYbA‡ò½÷41ºë~ŸÍÜÂ4ÍRŒH;äøŞ,Ğá\&ö¹ı´(ÁÜñ¯61Éß|s[Íœğ“ÍÒ¯}|} Îy‡¸Ê$›ò´½Ÿüê¶l±WFå¡Ÿpúìˆ4xl âòö•ıµM„JÜÓ“¶Î>lŸ·DÆ\h²AUÓDn‚Şå=íxúe|µGˆıÅ«‚€Ÿşb¨Ë-Ø Js
g=»şÊ<ù€‹Z­ùÿKpä!Nñ£e¦Ê4ØÓŸÆ÷$Áª£ûµ­·nAâ_vB2·xhñ~×è^Šy¤ó>›Ï0ÜTZYë3£è¹és8Ñ» ¹H @lËrq-ì{ÀN—Fî×€‹dâ< .éÕ¯ú¦R<+RÈ{;°T–àS
fù¹rä\ŠÃF®êU<-|A®h3Ÿzª)®Ì˜¾øÕr°R¬Âû±b ®òÅŞ*u{êŠµµºpvÙ¼¼~úãœÄS(!³nHÂG!¢ĞùñÛ«Õı˜Lzh¬ŠåÉ`0A{DÓyá~Üì)€Ù
\•Ğğ;«†Ç•§2 ôÇ•êU•û$×@ŸÚÀàôµB…©GŒÓÆÀleh©;Xw•Ç+ê’³W–Î¼©p>ÔvuÃ.J)ŠHæÏêæOú,aşºadËìa°$
ì´RÆ²§Õãíç¦’ÈÌ_zAb#O9p_­'w‹8±NÕx<\DŒàGcI§Bƒ‚4¤Ú\§×q÷÷.ªa6¹İİsÑ¨Ó7·¢wØ®Ã	Ç	uQ6Ìî™v sD¿¶zñ8C$P)9Å…~/\Î
\Š³5ş÷Ó©¨0I=/Õ™»2(‚GİñÚN¿ùMKD&fô¾Eå¬P`J.K¨ù³’ÈõÍëcía®ïÑÉÎñ¬ÉÌ>´¬œ±HÂV}'Šöş«‰Òí8&¢W«í›fn-”yBE/p+ô<0}ƒ¸«á¢Z7‰\Gã;?@+äÌãšåÄI9"9XÊ fC0¤7‰/Ùøf(ğ{»È?eblùyíáık^-ŠL\›»LÂ¨¯iT‹Aû9;ÀT¶:PÑéá{°Ja>Š%2LÍøŞ÷y”Üúdº\pbjúÎĞyÙîå·äsˆoA†Á¹.ìğ†ˆkş3‹’\fşBlüz\)…e«³+õ:ä–¼	°Ùl Îò|¶$šíÈ¸¾‘ZétèS5?‚Q*ä¼–ìĞß0ç*9‡™ÇZƒ¹\tÍÍOïp¼3zBÔš=„Üšë úIÀ%ñ´
4>aD5`(lµÏ­sº5O'S¬à›SuœAŒ®X:IÑ¯İÃôÁP·Ö›Cå°7Jg·¯‚õ‡hã¶âÆiêêbıÂyûWiõ¥ş>?… Rrj8JSGßñÀû:ÇÚj³û¹(&C¡<®hT$î*	 Âú5¶é®”9ËÿÀÜx¯ë	 š„Ÿ¤¦PÚS j(Éñğqê€ÎVã_EÈ“'¸¼Óì¨¡B·# ÛN ‰ø\t®…Ú7¯„:>…ØñšõØÙ€M{NÇit¹“Q´şµ²¹m‰ÙdB‚l€õ9(ìµbú„ôŸN}õïsøÄA'¯¾qâåS[8¡}k‰
˜ĞX“µš	‚W¨T¸½)”»®*Y(ÉòiÌÒ‰×Àj@Õæp¸)Šr¶<hœ®"sÇç¸ŞÀpJ%OØCUPüó{üu±ù:‰Dù4û»%edÂkDı½DS…q7Rë9(Cÿ˜š;M=ß'-)¨}ƒÖíF&d¦~(Êé£º¾Â¼¿Ë‡Åm¹ºXËİ~iÏc¥¡Øbl…F›­?+…~BÇs8P„RÕØïŸ[”¨àËJFL°Û|ëöºùH©K §*Åê³ã:ñ¯ŞáM×±Ü{E¢Œ‹uuSË Û~²®6ê«xj¹)Y(i€ÃXcÔ±À°[kÙ6»”ˆúè¦i“ÜøùWßZ2ÎÇz|Bpê¿Ño’Ÿï&®ª"ÕH:1]Û`·C ÙOZ˜—z—$Ûo~I*ƒÊ 4(ƒ![Ÿ‘Û±½©ûøüüÌCI7Ooœ'sÌ¥Ÿ®»j›Yä„õ$¬bsùfT›xwŸÙ-mıR"3âéËºµ‰Ä;ftNuóâ˜r¶Ó²Êİ&ÇÄºÉş„äÔşü´X%pzšL’'4Ô"ñˆ1ÚE¿q§§ä:,Z#°$XRŞé£@²B£Ä²¨­ä£È@s6ÃàéÈ%„ß¦éYÕÇG¼%„·„ÂA(š“5pcÜøš³÷åt›¶'H±
P}QgvÛ[ø4„ÊŸ9çIó¤whVÙ¢™Âèfç —ö’s±¹IÃÍpUQï)–«¯0/Ü,%ı! Õ-Z|ÌI Ş¦pKC=+YBXz‡æä@û|À4¸MµK­DlÙê)E?xyjù;sm¡®?üÙë±Úâ…›ı“³CíA¶‹VÉ´‹àée8	ÂNz0¥ĞÄÃÈıŠÅ÷[øvCñ“…7x‡©nıëLUåpÌ_×EEÏ»Šuç«û<±FPé3S".f9XZü…IäX<Æ›R¹6Î˜OÆF¶À¸È"“ûU“dİšÌ°î®‚Zš<ú!¾Æ ¡§Æ†‡ßhiQe¤'vƒaæĞ¥Ã™@=Uq¹‰Hš
e*Tb6ÏYåDƒ ´Õ¡Ó4R)M|»Õîé}ósÆŸ‘§`óÔó`"¶‘,hİ¡ÏÚ› X©"H½m!ùc1å9$®]¡ü ‰Şİ=ÛĞË‡l£á²¼È—äîˆ¤Åµ5zhàÇçé†	Kìóğ}‘Š&À¼¡§uŞİ),VÇ…*ÿ{ÿÑÎÒä…ûIä8f:èBu¸€æM©¥àGÇåÿøe}9ïïtj9åç½FE/Y°­_Ig,ŞpXÇ:R×Œn•¢I”(¬ŸÿßÉ¨ÅSµ éW½pÁ ;œƒ=}¦]È¨$$š­-âÉdñÂoO³`"Ãô4Y½ÚË¥AÁ¨ñ¦ggˆu å8Ï‚•öCMCŒ¢4¼M/îD.ß"Îfpå‘Ë$!Ş¥g-,—ÓÖIxÓ]ÚaÙ[¥ğŸäßóIî]Ê.^—¥EÁ›˜œÏ-6M² Ø1ù 8pfÿ·HÛß2“ûë4¡øU\äÍş­Ó%}Xp|[,ã¬?col({tó–³!e¾*Á§İ
ß[Ü`0Î{&v‹†VÍƒ²Â@ÍòñO1•¿ƒ‰ó7O,{-±qäÌK¢VéHGğK‰=ãfW*4eé‘—G¨ÿÓ;*CSÙø¢Íkv„‰„D¬˜[±sâ·2_áş•g Šç+å9ñİòxØmæoP/8_%šªFm?1¿•Ù¥÷qFd½TÑÇ¦±¦ç`S½¶Áƒodr@Mc²SEg›ä»Ç¥·âù˜{"¹D°×pÆç¦şà¦‘µ#¼·İìf­?F3púrNáD^j¸RPdè	)Ök7¹Mä…ög•—‚—°^T¹&ƒc)­h¹7J»:Û¡Ç"›<:‡¿ç5Jë–8j.¥,é ´&Dç]ÏNãí¬s<[ºE€ÓgîXVi…Ì[4Å2ãì¡ò=XM]D·ÓÄ6Ì/¬wRì¢ã‰¥Ép[âaZõĞ˜bÙåçßÊô+ì¨r˜š®%™Û®ÇË5 ˜æâI}‚ÍÍ)OWÙ%A[ÂL¢a©¬åÖ/¾N@İ?êÄÀl¹"FŞÚp/²/øÛ+_uÍÌhêe§ı ®vªÍ×0—DÉ1Ú’r­
Áøø¤$˜œH±dßk>¬L£v:H7ùÙMõwÓw%Ú&<arê˜¥4Šˆ^·6Q@â.ÔÇI›Ö¾ÁIñi$nš®Dä‘ñVé>Şk÷Ò¾·YlÒyñNí˜³…ê4Öæ½`¤\àóâapÖìow ,.öº‰Ü°[°C9Ùpw}‰@KËh-µßµc†HFªS”qşƒ´u¼Œ†øŸ8bùvéï¨Ì&ugP^Gš£·	ı½Òúóü·¶–J¹ÙA×c7ö&ÒÓ:R¼ß¥‚[oÚ¡VÌ9ù¢ÕtsjëMº™Jk~Èë³NæÃ˜8,®ÒÑ^ÄÇ#ëìÙ¾3Jnæ¼€å¡øy\?á[‚¾ß˜Kÿï)¦³8sñøï¼Bƒ8jÊÀ·CëëóŞ1 XÁîñÚ¥Ú…i‡ƒCVc&ÙxÑtP®±İTz} ú¤ØÚªVÛ7®7\ J¤Pâ?İ?˜1	a
®"ê¼ú×©;šå6˜ÔK+é=&ªpWH%Z®àÀZCæ7qTy2,Ë·Š­Ã[Á´ÌãÔÉÓä.sù‚ÉŸÃr`—?òxÛ.ë³2qÆUt„{
¦&\ó}ˆú ™WmJ…mM]5E†â*ÿ4‰”úuÖK’UËÎ6OêJAÉÎÕõG‡  í; ©ëõ˜V dlÅŠÁÂìJ¨w,s¨b.„á?Ğ÷³†¸‡QA%Û!Y³z·!–©eLõá ¿oÎzÌeÄÇï›9e­üõ³SŠaƒñ–µ/¤Ò1[NP˜}ğT†J¯ô9i Ò¸‚pN»„ğšdPl[ÅÄ
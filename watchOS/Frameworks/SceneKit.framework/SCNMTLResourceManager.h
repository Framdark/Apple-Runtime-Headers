//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MTKTextureLoader, NSMutableArray, SCNMTLBufferAllocator, SCNMTLLibraryManager, SCNMTLShadableKey, SCNMTLShaderBindingsGenerator;
@protocol MTLCommandQueue, MTLDepthStencilState, MTLDevice, MTLTexture;

__attribute__((visibility("hidden")))
@interface SCNMTLResourceManager : NSObject
{
    id <MTLDevice> _device;
    id <MTLCommandQueue> _commandQueue;
    struct __C3DEngineStats *__engineStats;
    SCNMTLLibraryManager *_libraryManager;
    SCNMTLShaderBindingsGenerator *_bindingsGenerator;
    struct __CFDictionary *_availablePipelineStates;
    struct os_unfair_lock_s _availablePipelineStatesLock;
    SCNMTLBufferAllocator *_commonProfileBuffersAllocator;
    CDStruct_670bd187 _availableLightingSystemReflectionProbeTextures;
    CDStruct_670bd187 _availableIrradianceTextures;
    CDStruct_670bd187 _availableRadianceTextures;
    CDStruct_670bd187 _availableImages;
    CDStruct_670bd187 _availableImageProxy;
    CDStruct_670bd187 _availableSamplers;
    CDStruct_670bd187 _availableIESTextures;
    CDStruct_670bd187 _availableBuffers;
    CDStruct_670bd187 _availableMeshes;
    CDStruct_670bd187 _availableMeshSources;
    CDStruct_670bd187 _availableMeshElements;
    CDStruct_670bd187 _availableRasterizerStates;
    CDStruct_670bd187 _availableMorphs;
    CDStruct_670bd187 _availableSkins;
    CDStruct_670bd187 _availableComputePipelines;
    CDStruct_670bd187 _availableComputePipelinesWithStageDescriptor;
    CDStruct_670bd187 _availableTessellators;
    CDStruct_670bd187 _availableWireframeMaterials;
    CDStruct_670bd187 _availableShadables;
    SCNMTLShadableKey *_availableShadablesSearchKey;
    NSMutableArray *_availableStageDescriptors;
    struct os_unfair_lock_s _stageDescriptorsLock;
    id _nullStageDescriptor;
    id <MTLTexture> _areaLightPrecomputedDataTexture;
    id <MTLTexture> _specularDFGTexture;
    // Error parsing type: ^{__C3DFXMetalProgram={__C3DFXProgram={__C3DEntity={__CFRuntimeBase=IAI}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}i}lb1b1^{__C3DFXProgramDelegate}}[2^{__CFString}]^{__CFString}^{__CFDictionary}^v^{__CFDictionary}^v^{__CFString}}, name: _defaultProgram
    // Error parsing type: ^{__C3DFXMetalProgram={__C3DFXProgram={__C3DEntity={__CFRuntimeBase=IAI}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}i}lb1b1^{__C3DFXProgramDelegate}}[2^{__CFString}]^{__CFString}^{__CFDictionary}^v^{__CFDictionary}^v^{__CFString}}, name: _defaultProgramForTessellation
    // Error parsing type: ^{__C3DFXMetalProgram={__C3DFXProgram={__C3DEntity={__CFRuntimeBase=IAI}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}i}lb1b1^{__C3DFXProgramDelegate}}[2^{__CFString}]^{__CFString}^{__CFDictionary}^v^{__CFDictionary}^v^{__CFString}}, name: _isolateProgram
    id <MTLDepthStencilState> _depthAndStencilStateWithReadWriteDepthDisabled;
    id <MTLTexture> _defaultTexture;
    id <MTLTexture> _defaultTexture3D;
    id <MTLTexture> _defaultCubeTexture;
    id <MTLTexture> _defaultLightingEnvironmentIrradianceTexture;
    id <MTLTexture> _defaultLightingEnvironmentRadianceTexture;
    MTKTextureLoader *_mtkTextureLoader;
}

+ (void)unregisterManagerForDevice:(id)arg1;
+ (id)resourceManagerForDevice:(id)arg1;
@property(readonly, nonatomic) id <MTLCommandQueue> commandQueue; // @synthesize commandQueue=_commandQueue;
@property(readonly, nonatomic) id <MTLDevice> device; // @synthesize device=_device;
@property(retain, nonatomic) SCNMTLLibraryManager *libraryManager; // @synthesize libraryManager=_libraryManager;
- (id)depthAndStencilStateWithReadWriteDepthDisabled;
- (struct __C3DEngineStats *)stats;
- (void)flush;
- (void)dispatchForCubemap:(id)arg1 computeEncoder:(id)arg2 pipelineState:(id)arg3;
- (void)dispatchForTexture:(id)arg1 computeEncoder:(id)arg2 pipelineState:(id)arg3;
-     // Error parsing type: @12@0:4^{__C3DTextureSampler={__CFRuntimeBase=IAI}llllll{C3DColor4=(?=[4f]{?=ffff})}fClI}8, name: renderResourceForSampler:
-     // Error parsing type: @24@0:4^{__C3DMaterial=}8^{__C3DGeometry={__C3DEntity={__CFRuntimeBase=IAI}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}i}^{__C3DMesh}^{__C3DMaterial}^{__CFArray}^{__CFSet}^{__CFArray}^{?}b1^?{?=CB{?=BCCC}^{__C3DMeshElement}^{__C3DMeshSource}^{__C3DMesh}^v^v}{?=CfIC(?={?=ff}{?=f}{?=f}{?=Cb1b1})}C}12@16^{__C3DEngineContext=}20, name: renderResourceForMaterial:geometry:renderPipeline:engineContext:
- (id)newIndexBufferWithLength:(unsigned int)arg1 options:(unsigned int)arg2;
- (id)newBufferWithLength:(unsigned int)arg1 options:(unsigned int)arg2;
- (id)newBufferWithBytes:(const void *)arg1 length:(unsigned int)arg2 options:(unsigned int)arg3;
- (id)newConstantBufferWithLength:(unsigned int)arg1 options:(unsigned int)arg2;
-     // Error parsing type: @28@0:4^{__C3DRendererElement=I^{__C3DNode}^{__C3DGeometry}^{__C3DMesh}^v^{__C3DMaterial}^{__C3DFXTechnique}{?=[8C]}iIb8b1b1b1b1b1b1b3b1b3}8^{__C3DEngineContext=}12^{__C3DFXPassInstance=^{__C3DFXPass}i^{__C3DFXPassInstance}CCBC[6^{__C3DArray}]{__C3DCullingContext=^{__C3DEnginePipeline}[6{?=[6(?={?=ffff})]}][6(C3DMatrix4x4=[16f][4]{?=[4]})][6(C3DMatrix4x4=[16f][4]{?=[4]})][6(C3DMatrix4x4=[16f][4]{?=[4]})][6(C3DMatrix4x4=[16f][4]{?=[4]})][6{?=[6(?={?=ffff})]}][6(C3DMatrix4x4=[16f][4]{?=[4]})][6(C3DMatrix4x4=[16f][4]{?=[4]})][6(C3DMatrix4x4=[16f][4]{?=[4]})][6(C3DMatrix4x4=[16f][4]{?=[4]})][6(C3DMatrix4x4=[16f][4]{?=[4]})]ICCCCB^{__C3DFXPass}^v^{__C3DNode}^{__C3DNode}BBBBBBBBBBII^v^{__C3DScene}^{__C3DEngineContext}dd(?={?=ffff})(C3DMatrix4x4=[16f][4]{?=[4]})(C3DMatrix4x4=[16f][4]{?=[4]})[6{?=^{?}II}]B^?}^{__C3DNode}}16Q20, name: wireframeResourceForRendererElement:engineContext:passInstance:hashPass:
-     // Error parsing type: @12@0:4^{__C3DGeometry={__C3DEntity={__CFRuntimeBase=IAI}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}i}^{__C3DMesh}^{__C3DMaterial}^{__CFArray}^{__CFSet}^{__CFArray}^{?}b1^?{?=CB{?=BCCC}^{__C3DMeshElement}^{__C3DMeshSource}^{__C3DMesh}^v^v}{?=CfIC(?={?=ff}{?=f}{?=f}{?=Cb1b1})}C}8, name: renderResourceForTessellatedGeometry:
-     // Error parsing type: @20@0:4^{__C3DSkinner=}8^{__C3DMesh=}12^{__C3DGeometry={__C3DEntity={__CFRuntimeBase=IAI}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}i}^{__C3DMesh}^{__C3DMaterial}^{__CFArray}^{__CFSet}^{__CFArray}^{?}b1^?{?=CB{?=BCCC}^{__C3DMeshElement}^{__C3DMeshSource}^{__C3DMesh}^v^v}{?=CfIC(?={?=ff}{?=f}{?=f}{?=Cb1b1})}C}16, name: renderResourceForSkinner:baseMesh:baseGeometry:
-     // Error parsing type: @16@0:4^{__C3DMorph=}8^{__C3DGeometry={__C3DEntity={__CFRuntimeBase=IAI}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}i}^{__C3DMesh}^{__C3DMaterial}^{__CFArray}^{__CFSet}^{__CFArray}^{?}b1^?{?=CB{?=BCCC}^{__C3DMeshElement}^{__C3DMeshSource}^{__C3DMesh}^v^v}{?=CfIC(?={?=ff}{?=f}{?=f}{?=Cb1b1})}C}12, name: renderResourceForMorph:baseGeometry:
- (id)renderResourceForMesh:(struct __C3DMesh *)arg1 dataKind:(unsigned char)arg2;
- (void)__updateMutableMesh:(struct __C3DMesh *)arg1 withMetalMesh:(id)arg2;
-     // Error parsing type: @12@0:4^{__C3DMeshElement={__C3DEntity={__CFRuntimeBase=IAI}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}i}II^{__C3DMeshElement}CCC{?=c^{__CFData}I^I{?=ii}CB}fff^v^{__C3DMeshSource}[2]^{?}I}8, name: renderResourceForMeshElement:
-     // Error parsing type: @12@0:4^{__C3DMeshSource={__C3DGenericSource={__C3DEntity={__CFRuntimeBase=IAI}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}i}^{__C3DSourceAccessor}(?=^{__CFData}^v^v)ib1b1b1}SCC}8, name: renderResourceForMeshSource:
- (id)_bufferForData:(struct __CFData *)arg1 bytesPerIndex:(unsigned long)arg2;
- (id)renderResourceForRasterizerState:(struct __C3DRasterizerStates *)arg1 reverseZ:(_Bool)arg2;
- (void)resetRasterizerStates;
- (void)removeAllShaders;
- (void)_geometryWillDie:(id)arg1;
- (void)_materialWillDie:(id)arg1;
- (void)_passWillDie:(id)arg1;
- (void)_programWillDie:(id)arg1;
-     // Error parsing type: v16@0:4^{__C3DFXProgram={__C3DEntity={__CFRuntimeBase=IAI}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}i}lb1b1^{__C3DFXProgramDelegate}}8^{__C3DFXPass={__CFRuntimeBase=IAI}^{__CFString}liB^{__C3DFXTechnique}^{__CFString}^{__CFString}^{__CFString}^{__CFString}B^{__C3DFXProgram}^{__C3DMaterial}^{__C3DBlendStates}^{__C3DRasterizerStates}{C3DColor4=(?=[4f]{?=ffff})}CIb1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1^{__C3DRendererElement}LL{?=^?^?^?^?^?^?^?^?^v}{?=[8{?=CCCb1b1b1b1b1b1}]{?=CCCb1b1b1b1b1b1}b3b1b1}{CGPoint=ff}[9f]^{?}I^{__C3DNode}^{__C3DNode}^{__CFArray}^{__C3DNode}C^{__CFString}^{__CFString}^{__CFString}^^{__C3DFXPassInput}ii^{__CFDictionary}@?@?^{__CFDictionary}^v}12, name: _removeMatchingProgram:pass:
- (void)_imageProxyWillDie:(id)arg1;
- (void)_imageWillDie:(id)arg1;
- (void)_skinWillDie:(id)arg1;
- (void)_programHashCodeWillDie:(id)arg1;
- (void)_morphWillDie:(id)arg1;
- (void)_meshWillDie:(id)arg1;
- (void)_meshElementWillDie:(id)arg1;
- (void)_meshSourceWillDie:(id)arg1;
- (void)dealloc;
- (id)initWithDevice:(id)arg1;
- (id)sphericalHarmonicsForEnvironmentTexture:(id)arg1 order:(unsigned int)arg2 commandBuffer:(id)arg3;
- (id)shFromCPU:(id)arg1 commandBuffer:(id)arg2;
- (void)reloadPipelinesIfNeeded;
- (id)newComputePipelineStateWithFunctionName:(id)arg1 library:(id)arg2 constantValues:(id)arg3;
- (id)newComputePipelineStateWithFunctionName:(id)arg1 constantValues:(id)arg2;
- (id)newComputePipelineStateWithFunctionName:(id)arg1 library:(id)arg2;
- (id)newComputePipelineStateWithFunctionName:(id)arg1;
- (id)getUniqueStageDescriptor:(id)arg1;
- (id)computePipelineStateForKernel:(id)arg1;
- (id)newComputePipelineStateForKernel:(id)arg1 withStageDescriptor:(id)arg2 constants:(id)arg3 constantsHash:(id)arg4;
- (id)computePipelineStateForKernel:(id)arg1 threadGroupSizeIsMultipleOfThreadExecutionWidth:(_Bool)arg2;
- (id)newComputePipelineStateForDesc:(CDStruct_4cea7480)arg1 library:(id)arg2;
- (void)_configureComputePipeline:(id)arg1 withDescriptor:(id)arg2;
- (id)_newComputeDescriptorForPipelineDesc:(CDStruct_4cea7480)arg1 library:(id)arg2;
- (id)newRenderPipelineStateWithDesc:(CDStruct_022d6293)arg1;
- (void)_createPipelineStateWithDescriptor:(id)arg1 desc:(CDStruct_022d6293)arg2 pipeline:(id)arg3;
- (struct __C3DFXProgram *)defaultProgramUsingTessellation:(_Bool)arg1;
- (id)renderResourceForProgramDesc:(CDStruct_ed4b32f0)arg1 renderPassDescriptor:(id)arg2;
- (id)iesTextureForProfile:(id)arg1 renderContext:(id)arg2;
- (id)defaultTexture3D;
- (id)defaultCubeTexture;
- (id)defaultTexture;
-     // Error parsing type: @24@0:4^{__C3DImage=}8^{__C3DTextureSampler={__CFRuntimeBase=IAI}llllll{C3DColor4=(?=[4f]{?=ffff})}fClI}12i16^{__C3DEngineContext=}20, name: renderResourceForImage:sampler:options:engineContext:
-     // Error parsing type: @20@0:4^{__C3DImageProxy={__CFRuntimeBase=IAI}{?=^?^?^?^?}^vC}8^{__C3DTextureSampler={__CFRuntimeBase=IAI}llllll{C3DColor4=(?=[4f]{?=ffff})}fClI}12^{__C3DEngineContext=}16, name: renderResourceForImageProxy:sampler:engineContext:
-     // Error parsing type: @16@0:4^{__C3DEffectSlot={__CFRuntimeBase=IAI}{C3DColor4=(?=[4f]{?=ffff})}^v(?=^{__C3DImage}^v^{__C3DImageProxy}^{__C3DTexture})b8b1b1b1b4c^{__C3DTextureSampler}^(C3DMatrix4x4)fi^v}8^{__C3DEngineContext=}12, name: renderResourcesForEffectSlot:withEngineContext:
- (id)unstageTexture:(id)arg1 commandBuffer:(id)arg2;
- (id)latlongTextureForCubemap:(id)arg1 pixelFormat:(unsigned int)arg2 renderContext:(id)arg3 needsMipmap:(_Bool)arg4;
- (id)cubemapTextureForLatlongTexture:(id)arg1 pixelFormat:(unsigned int)arg2 engineContext:(struct __C3DEngineContext *)arg3 needsMipmap:(_Bool)arg4;
- (_Bool)_copyImage:(struct __C3DImage *)arg1 toTexture:(id)arg2 desc:(id)arg3 textureOptions:(int)arg4 needsMipMapGeneration:(_Bool)arg5;
- (id)_textureDescriptorFromImage:(struct __C3DImage *)arg1 needsMipMap:(_Bool)arg2 textureOptions:(int)arg3;
- (void)_enqueueCopyFromTexture:(id)arg1 toTexture:(id)arg2 blitEncoder:(struct SCNMTLBlitCommandEncoder *)arg3 generateMipMaps:(_Bool)arg4;
- (id)newTextureUsingMTKTextureLoaderWithURL:(id)arg1 options:(id)arg2;
- (id)newTextureWithDescriptor:(id)arg1;
- (id)convertTextureToCubeMapIfApplicable:(id)arg1 engineContext:(struct __C3DEngineContext *)arg2 needsMipmap:(_Bool)arg3;
- (id)textureForSamplingTexture:(id)arg1 atSize:(unsigned int)arg2 mipmapLevelCount:(unsigned int *)arg3 renderContext:(id)arg4;
- (id)areaLightPrecomputedDataTexture;
- (id)specularDFGTextureWithRenderContext:(id)arg1;
- (id)radianceTextureForEnvironmentTexture:(id)arg1 engineContext:(struct __C3DEngineContext *)arg2 commandBuffer:(id)arg3;
- (id)newRadianceTextureForEnvironmentTexture:(id)arg1 engineContext:(struct __C3DEngineContext *)arg2 cpuAccessible:(_Bool)arg3 commandBuffer:(id)arg4;
- (void)_bakeSphericalHamonicsBasedIrradianceTexture:(id)arg1 forEnvironmentTexture:(id)arg2 renderContext:(id)arg3 applySH:(CDUnknownBlockType)arg4;
- (void)_bakeStochasticIrradianceTexture:(id)arg1 forEnvironmentTexture:(id)arg2 mipmapLevelForSampling:(unsigned int)arg3 useTextureView:(_Bool)arg4 renderContext:(id)arg5;
- (id)irradianceTextureForEnvironmentTexture:(id)arg1 renderContext:(id)arg2 applySH:(CDUnknownBlockType)arg3;
- (id)defaultLightingEnvironmentRadianceTexture;
- (id)defaultLightingEnvironmentIrradianceTexture;

@end


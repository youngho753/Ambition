#include "stdafx.h"
#include "SceneDirector.h"


SceneDirector::SceneDirector()
{
}


SceneDirector::~SceneDirector()
{
}

void SceneDirector::ChangeScene(GameObject * scene)
{
	if (m_CurrentScene)
	{
		SAFE_DELETE(m_CurrentScene);
		m_CurrentScene = scene;
	}
}

void SceneDirector::Update(float deltaTime)
{
	if (m_CurrentScene)
		m_CurrentScene->Update(deltaTime);
}

void SceneDirector::Render()
{
	if (m_CurrentScene)
		m_CurrentScene->Render();
}

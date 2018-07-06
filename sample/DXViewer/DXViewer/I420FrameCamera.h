#pragma once

class I420FrameCamera
{
public:
    I420FrameCamera();
    ~I420FrameCamera();

    DirectX::XMVECTOR& GetPosition();
    DirectX::XMFLOAT3& GetRotation();
    DirectX::XMMATRIX GetViewMatrix();

private:
    DirectX::XMVECTOR position_ = { 0.0f,0.0f,0.0f, 1.0f };
    DirectX::XMFLOAT3 rotation_ = { 0.0f,0.0f,0.0f };
};
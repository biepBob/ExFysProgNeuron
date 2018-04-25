#include "Neuron.h"

neuron::neuron(vector<float*> weights,float* bias)
{
        setWeights(weights);
        setBias(bias);
}

neuron::neuron(int size)
{
        Weights.resize(size);
        for (int i = 0; i < size; i++)
        {
                random_device rd; //Initializes random engine
                mt19937 gen(rd()); //Mersenne Twister 19937 generator, rng
                uniform_real_distribution<> dis(0, 1); //uniform probability distribution
                Weights[i] = dis(gen); //Generate random weights
        }
}


neuron::~neuron()
{
}

void neuron::setWeights(vector<float*> w)
{
        Weights.resize(w.size());
	for (int i = 0; i < w.size(); i++)
	{
		Weights[i] = *w[i];
	}
}

void neuron::setBias(float* b)
{
        Bias = *b;
}

vector<float>* neuron::getWeights()
{
        return &Weights;
}

float* neuron::getBias()
{
        return &Bias;
}

const int neuron::getNumberOfInputs()
{
        return Weights.size();
}

float neuron::sigmoid(float z)
{
        return 1 / (1 + exp(-z));
}

float neuron::dsigmoid(float z)
{
        return sigmoid(z)*(1 - sigmoid(z));
}

float neuron::activateFunc(vector<float*> input)
{
        float temp = 0;
        for (int i = 0; i < input.size(); i++) 
        {
                temp += Weights[i] * *input[i]; //w.x dot product
        }
        temp += Bias;
        return temp;
}

float* neuron::resultFunc(vector<float*> input) 
{
        Output = sigmoid(activateFunc(input));
        return  &Output;
}

